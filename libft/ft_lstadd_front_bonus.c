/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 13:17:51 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 13:17:51 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{

	t_list *head = NULL;

    char *s = "a";
    char *s1 = "b";

    t_list *node1 = ft_lstnew(s);
    t_list *node2 = ft_lstnew(s1);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);

    while (head != NULL)
	{
        printf("%s\n", (char *)head->content);
        head = head->next;
    }
	free(head);
	free(node1);
	free(node2);
}*/
