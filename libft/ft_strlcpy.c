/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-16 12:39:41 by speladea          #+#    #+#             */
/*   Updated: 2024-05-16 12:39:41 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*int	main(void)
{
	char	src[] = "bateau";
	char	dest[] = "avion";

	printf("src  avant : %s\n", src);
	printf("dest avant : %s\n", dest);
	ft_strlcpy(dest, src, 6);
	printf("src  apres : %s\n", src);
	printf("dest apres : %s\n", dest);
}*/
