/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 12:49:00 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 12:49:00 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*int main()
{
	int a = 42;
	char *s = "ecole  42";

	t_list *node1 = ft_lstnew(&a);
	t_list *node2 = ft_lstnew(s);

	if (node1 != NULL && node2 != NULL)
	{
		printf("node1->content: %d\n", *(int *)(node1->content));
		printf("node2->content: %s\n", (char *)(node2->content));
	}
	else
	{
		printf("MALLOC FAILED.\n");
	}
	free(node1);
	free(node2);
}*/
