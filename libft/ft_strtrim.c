/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-20 15:41:56 by speladea          #+#    #+#             */
/*   Updated: 2024-05-20 15:41:56 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s2;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (s1[end - 1] != '\0' && ft_strchr(set, s1[end - 1]) && end > start)
	{
		end--;
	}
	s2 = malloc (sizeof(char) * (end - start) + 1);
	if (!s2)
	{
		return (NULL);
	}
	ft_strlcpy(s2, &s1[start], end - start + 1);
	return (s2);
}

/*int	main(void)
{
	printf("%s", ft_strtrim("  simon    ", " "));
}*/
