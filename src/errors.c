#include "so_long.h"

void	w_error(char *error)
{
	ft_putstr_fd(error, 2);
	exit(0);
}

void	get_error(t_core *core, char *error)
{
	ft_close_window(core);
	w_error(error);
}

void	check_argcv(int argc, char *argv[])
{
	if (argc == 1)
		w_error("No map\n");
	else if (argc > 2)
		w_error("Too many arguments.\n");
	else if (argc == 2 && !ft_map_name_checker(argv[1]))
		w_error("The map is not a .ber file.\n");
}

int	ft_map_name_checker(char *m)
{
	int	i;

	i = 0;
	while (m[i])
		i++;
	i--;
	if (m[i - 3] == '.' && m[i - 2] == 'b' && m[i - 1] == 'e' && m[i] == 'r')
		return (TRUE);
	else
		return (FALSE);
}
