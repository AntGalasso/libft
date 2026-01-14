/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:43:02 by pneto             #+#    #+#             */
/*   Updated: 2025/12/05 20:07:32 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	if (!lst)
		return (NULL);
	last_node = lst;
	while (last_node->next != NULL)
		last_node = last_node->next;
	return (last_node);
}
/*int main()
{
t_list *list;
t_list *last;

list = NULL;
// create list 
ft_lstadd_front(&list, ft_lstnew("Welcome"));
ft_lstadd_front(&list, ft_lstnew("your"));
ft_lstadd_front(&list, ft_lstnew("Monster"));

last = ft_lstlast(list);
printf("Last: %s\n", (char *)last->content);
}*/