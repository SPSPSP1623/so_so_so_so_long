/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 13:06:56 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 13:06:56 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*int	main(void)
{
	int i;

	char	*s = "tesTESTtest";
	char	*s1 = "hwhw";
	char	*s2 = "aaaaaa";

	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew(s);
	t_list	*node2 = ft_lstnew(s1);
	t_list	*node3 = ft_lstnew(s2);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);

	i = ft_lstsize(head);

	printf("%d", i);

}*/
