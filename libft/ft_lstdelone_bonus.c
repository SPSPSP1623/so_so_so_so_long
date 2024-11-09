/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 13:59:18 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 13:59:18 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	(void)content;
}


void ft_print(t_list *head)
{
    while (head != NULL)
    {
        printf("%s\n", (char *)head->content);
        head = head->next;
    }
}
int	main(void)
{

	t_list	*head = NULL;
	t_list	*original_head = NULL;

	char	*s1 = "N";
	char	*s2 = "O";
	char	*s3 = "M";
	char	*s4 = "I";
	char	*s5 = "S";

	t_list	*node1 = ft_lstnew(s1);
	t_list	*node2 = ft_lstnew(s2);
	t_list	*node3 = ft_lstnew(s3);
	t_list	*node4 = ft_lstnew(s4);
	t_list	*node5 = ft_lstnew(s5);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node4);
	ft_lstadd_front(&head, node5);

	original_head = head;

	printf("lst: \n");
	while (head != NULL)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}

	head = original_head;

	ft_lstdelone(node2, del);

	printf("deleted lst: \n");
	ft_print(head);
}*/
