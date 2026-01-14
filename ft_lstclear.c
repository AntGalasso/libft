/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:01:41 by pneto             #+#    #+#             */
/*   Updated: 2025/12/09 14:49:04 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		next_node = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = next_node;
	}
	*lst = NULL;
}

/*int main()
{
	t_list *list;

	list = NULL;
	char *str1 = strdup("One");
	char *str2 = strdup("Two");
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));

	node1->content = str1;
	node2->next = node2;
	node2->content = str2;
	node2->next = NULL;
	list = node1;
	printf("before clear: %s\n", (char *)list->content);
	ft_lstclear(&list)
	if (!list)
		printf("List cleared sucssfully.\n");
	
}*/