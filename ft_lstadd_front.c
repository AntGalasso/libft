/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:21:10 by pneto             #+#    #+#             */
/*   Updated: 2025/12/10 15:47:27 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int	main()
// {
// 	t_list *list;
// 	t_list *new_text;

// 	list = NULL;
// 	new_text = ft_lstnew("the monster Ball");
// 	ft_lstadd_front(&list, new_text);
// 	new_text = ft_lstnew("welcome to");
// 	ft_lstadd_front(&list, new_text)
// 	t_list *newlist = list;
// 	while (newlist)
// 	{
// 		printf("%s -> ", (char *)newlist->content);
// 		newlist = newlist->next;
// 	}
// 	printf("NULL\n");
// }
