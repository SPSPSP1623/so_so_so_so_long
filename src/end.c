#include "so_long.h"

void	ft_free_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->h)
	{
		free(map->map[i]);
		map->map[i] = NULL;
		i++;
	}
	free(map->map);
	map->map = NULL;
}

void	ft_free_tiles(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->h)
	{
		free(map->t[i]);
		map->t[i] = NULL;
		i++;
	}
	free(map->t);
	map->t = NULL;
}

void	ft_destroy_image(t_core *core)
{
	if (core->data->twall.img)
		mlx_destroy_image(core->mlx->ptr, core->data->twall.img);
	if (core->data->ttile.img)
		mlx_destroy_image(core->mlx->ptr, core->data->ttile.img);
	if (core->data->tp_u.img)
		mlx_destroy_image(core->mlx->ptr, core->data->tp_u.img);
	if (core->data->tp_d.img)
		mlx_destroy_image(core->mlx->ptr, core->data->tp_d.img);
	if (core->data->tp_l.img)
		mlx_destroy_image(core->mlx->ptr, core->data->tp_l.img);
	if (core->data->tp_r.img)
		mlx_destroy_image(core->mlx->ptr, core->data->tp_r.img);
	if (core->data->tcol.img)
		mlx_destroy_image(core->mlx->ptr, core->data->tcol.img);
	if (core->data->texit.img)
		mlx_destroy_image(core->mlx->ptr, core->data->texit.img);
	if (core->mlx->img)
		mlx_destroy_image(core->mlx->ptr, core->mlx->img);
	if (core->mlx->win)
		mlx_destroy_window(core->mlx->ptr, core->mlx->win);
}

int	ft_close_window(t_core *core)
{
	ft_free_map(core->map);
	ft_free_tiles(core->map);
	ft_destroy_image(core);
	mlx_destroy_display(core->mlx->ptr);
	mlx_loop_end(core->mlx->ptr);
	free(core->mlx->ptr);
	return (0);
}

void	ft_fail_before_mlx(t_core *core, char *error)
{
	ft_free_map(core->map);
	ft_free_tiles(core->map);
	w_error(error);
}
