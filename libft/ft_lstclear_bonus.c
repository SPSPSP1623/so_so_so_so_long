/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 14:02:16 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 14:02:16 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clear;

	while (*lst)
	{
		clear = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = clear;
	}
	*lst = 0;
}

/*void	del(void *content)
{
	printf("content: %s\n", (char *)content);
}
int	main(void)
{

	t_list	*head = NULL;
	t_list	*original_head = NULL;

	char	*str1 = "A";
	char	*str2 = "B";
	char	*str3 = "C";
	char	*str4 = "D";
	char	*str5 = "1";

	t_list	*node1 = ft_lstnew(str1);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);
	t_list	*node4 = ft_lstnew(str4);
	t_list	*node5 = ft_lstnew(str5);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node4);
	ft_lstadd_front(&head, node5);

	ft_lstclear(&head, del);

	printf("cleared lst: \n");
	while (head != NULL)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
}*/
