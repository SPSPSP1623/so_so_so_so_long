#include "so_long.h"

void	ft_map_parsing(t_data *data, t_map *map, t_core *core)
{
	int		fd;
	char	*map_line;

	fd = open(data->map_path, O_RDONLY);
	if (fd < 0)
		w_error("Error: fd < 0\n");
	map_line = get_next_line(fd);
	while (map_line && map_line[0] == '\n')
	{
		free(map_line);
		map_line = get_next_line(fd);
	}
	while (map_line)
	{
		map->h++;
		if (map->h == 1)
			map->w = ft_map_line_length(map_line);
		if (ft_map_line_length(map_line) != map->w)
			map->len = -1;
		free(map_line);
		map_line = get_next_line(fd);
	}
	close(fd);
	if (map->h == 0 || map->w == 0 || map->len != 1)
		w_error("Error: map is not rectangular.\n");
}

void	ft_alloc(t_map *map)
{
	map->map[map->y_ax] = malloc((map->w) * sizeof(char));
	map->t[map->y_ax] = malloc((map->w) * sizeof(t_tile));
}

void	ft_fill(t_map *map, char *line)
{
	map->map[map->y_ax][map->x_ax] = line[map->x_ax];
	map->t[map->y_ax][map->x_ax].type = line[map->x_ax];
	map->t[map->y_ax][map->x_ax].seen = 0;
}

void	ft_flood_fill(t_data *data, t_map *map)
{
	char	*line;

	line = get_next_line(map->fd);
	while (line && line[0] == '\n')
	{
		free(line);
		line = get_next_line(map->fd);
	}
	while (line)
	{
		ft_alloc(map);
		while (map->x_ax < map->w)
		{
			ft_fill(map, line);
			ft_data_check(data, map, line[map->x_ax]);
			map->x_ax++;
		}
		map->x_ax = 0;
		map->y_ax++;
		free(line);
		line = get_next_line(map->fd);
	}
	close(map->fd);
}

void	ft_parser(t_data *data, t_map *map, t_core *core)
{
	ft_map_parsing(data, map, core);
	init_map(data, map, core);
	ft_flood_fill(data, map);
	ft_wall_checker(core, map);
	ft_checking_checker(core, data);
	ft_init_check(core, data->pl_p.y, data->pl_p.x);
}