/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-16 12:01:33 by speladea          #+#    #+#             */
/*   Updated: 2024-05-16 12:01:33 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	negative;

	i = 0;
	nbr = 0;
	negative = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	if (nptr[i] == '-' && nptr[i - 1] != '+')
	{
		negative = negative * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + (nptr[i] - '0');
		i++;
	}
	nbr = nbr * negative;
	return (nbr);
}

/*int	main(void)
{
	char	*nptr = "44545";
	printf("%d", ft_atoi(nptr));
}*/
