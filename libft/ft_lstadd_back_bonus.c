/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 13:51:51 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 13:51:51 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (*lst == NULL)
		*lst = new;
	else
	{
		back = ft_lstlast(*(lst));
		back->next = new;
	}
}

/*int	main(void)
{

	t_list *head = NULL;

    char *s = "A";
    char *s1 = "B";
    char *s2 = "C";
    char *s3 = "D";
    char *s4 = "Z";

    t_list *node1 = ft_lstnew(s);
    t_list *node2 = ft_lstnew(s1);
    t_list *node3 = ft_lstnew(s2);
    t_list *node4 = ft_lstnew(s3);
    t_list *node5 = ft_lstnew(s4);

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_back(&head, node4);
	ft_lstadd_back(&head, node5);

	printf("result = \n");
    while (head != NULL)
	{
        printf("%s\n", (char *)head->content);
        head = head->next;
    }
	free(head);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
}*/
