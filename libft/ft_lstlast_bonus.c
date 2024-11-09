/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 13:48:53 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 13:48:53 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{

	t_list	*head = NULL;

	char	*s = "simon";
	char	*s1 = "a a a";
	char	*s2 = "ABCDEF";

	t_list	*node1 = ft_lstnew(s);
	t_list	*node2 = ft_lstnew(s1);
	t_list	*node3 = ft_lstnew(s2);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	t_list	*last = ft_lstlast(head);

	printf("%s\n", (char *)last->content);
}*/
