/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-21 11:53:10 by speladea          #+#    #+#             */
/*   Updated: 2024-05-21 11:53:10 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	if (nb == 0)
	{
		count = 1;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static char	*ft_positive(char *ptr, int n, int count)
{
	int	i;

	i = count - 1;
	while (i >= 0)
	{
		ptr[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (ptr);
}

static char	*ft_negative(char *ptr, int n, int count)
{
	int		i;
	long	nb;

	nb = n;
	i = count - 1;
	nb = nb * -1;
	while (i >= 0)
	{
		ptr[i] = '0' + (nb % 10);
		nb /= 10;
		i--;
	}
	ptr[0] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		count;

	count = ft_count(n);
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (!ptr)
		return (NULL);
	if (n > 0)
		ft_positive(ptr, n, count);
	if (n < 0)
		ft_negative(ptr, n, count);
	if (n == 0)
		ptr[0] = '0';
	ptr[count] = '\0';
	return (ptr);
}

/*int	main(void)
{
	printf("%s", ft_itoa(-2147483647));
}*/
