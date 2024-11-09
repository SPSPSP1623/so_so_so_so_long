/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-19 14:50:15 by speladea          #+#    #+#             */
/*   Updated: 2024-05-19 14:50:15 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		{
			i++;
		}
		else
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
	}
	return (0);
}
/*int	main(void)
{
	const	char *s1 = "abcD";
	const	char *s2 = "abcd";
	size_t	n = 3;

	printf("%d", ft_memcmp(s1, s2, n));
}*/
