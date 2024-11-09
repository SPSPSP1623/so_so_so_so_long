/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 14:21:10 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 14:21:10 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new_lst;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	start = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_lst = ft_lstnew(new_content);
		if (!new_lst)
		{
			del(new_content);
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, new_lst);
		lst = lst->next;
	}
	return (start);
}

/*void	*f(void *content)
{
	int	*new_c = malloc(sizeof(int));
	if (new_c == NULL)
		return (NULL);
	*new_c = *(int *)content;
	return (new_c);
}

void	del(void *content)
{
	free(content);
}

void	ft_print(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", *(int *)(lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	int	i;
	t_list	*lst = NULL;
	t_list	*new_lst;
	int		arr[] = {1, 2, 3, 4, 5};

	i = 0;
	while (i < 5)
	{
		t_list	*node = ft_lstnew(&arr[i]);
		if (!node)
		{
			ft_lstclear(&lst, del);
			return (1);
		}
		ft_lstadd_back(&lst, node);
		i++;
	}

	printf("og lst: \n");
	ft_print(lst);

	new_lst = ft_lstmap(lst, f, del);

	printf("new lst: \n");
	ft_print(new_lst);
}*/
