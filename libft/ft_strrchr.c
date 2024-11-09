/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-16 13:34:47 by speladea          #+#    #+#             */
/*   Updated: 2024-05-16 13:34:47 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == (unsigned char) c)
	{
		return ((char *)&s[i]);
	}
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	s[13] = "je suis simon";

	printf("%s", ft_strrchr(s, 'i'));
}*/
