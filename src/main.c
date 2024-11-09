#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_data		data;
	t_map		map;
	t_mlx		mlx;
	t_core		core;

	check_argcv(argc, argv);
	init_structs(&core, &data, &map, &mlx);
	init_so_long(&core, argv[1]);
	ft_parser(&data, &map, &core);
	mlx.ptr = mlx_init();
	if (!mlx.ptr)
		ft_fail_before_mlx(&core, "Error: mlx_init failed.\n");
	mlx.win = mlx_new_window(mlx.ptr, map.w * SIZE, map.h * SIZE, "so_long");
	if (!mlx.win)
		get_error(&core, "Error: problem with the window creation.\n");
	mlx.img = mlx_new_image(mlx.ptr, map.w * SIZE, map.h * SIZE);
	if (!mlx.img)
		get_error(&core, "Error: problem with mlx_new_image.\n");
	mlx.addy = mlx_get_data_addr(mlx.img, &mlx.bits_per_pixel, \
		&mlx.size_line, &mlx.endian);
	ft_get_textures(&data, &mlx);
	ft_draw(&data, &map, &mlx);
	mlx_hook(mlx.win, 17, 1L<<0, ft_close_window, &core);
	mlx_hook(mlx.win, 2, 1L<<0, ft_key_hook, &core);
	mlx_loop(mlx.ptr);
}
