#include "so_long.h"
#include <stdio.h>

int	ft_map_line_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

void	ft_wall_checker(t_core *core, t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (y < map->h)
	{
		x = 0;
		if (y == 0 || y == map->h)
		{
			while (x < map->w)
			{
				if (map->map[y][x] != WALL)
					ft_fail_before_mlx(core, "Error: not a wall.\n");
				x++;
			}
		}
		else if (map->map[y][0] != WALL || map->map[y][map->w - 1] != WALL)
			ft_fail_before_mlx(core, "Error: not a wall.\n");
		y++;
	}
}

void	ft_checking_checker(t_core *core, t_data *data)
{
	if (data->start != 1)
		ft_fail_before_mlx(core, "Error: more or less than one START.\n");
	if (data->collectible <= 0)
		ft_fail_before_mlx(core, "Error: no COLLECTIBLES.\n");
	if (data->exit != 1)
		ft_fail_before_mlx(core, "Error: more or less than one EXIT.\n");
}

void	ft_data_check(t_data *data, t_map *map, char type)
{
	if (type == START)
	{
		data->start++;
		data->pl_p.x = map->x_ax;
		data->pl_p.y = map->y_ax;
	}
	else if (type == COLLECT)
		data->collectible++;
	else if (type == EXIT)
		data->exit++;
}
