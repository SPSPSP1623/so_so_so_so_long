/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-17 15:33:09 by speladea          #+#    #+#             */
/*   Updated: 2024-05-17 15:33:09 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main(void)
{
	char	s[12] = "test ecole42";
	size_t	i;

	printf("before %s\n", s);
	ft_bzero(s, 5);
	i = 0;
	while (i < sizeof(s))
	{
		if (s[i] == '\0')
			printf("0");
		else
			printf("%c", s[i]);
		i++;
	}
}*/
