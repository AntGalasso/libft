/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:59:36 by pneto             #+#    #+#             */
/*   Updated: 2025/12/05 19:15:59 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*int main()
{
	t_list	*list;
	t_list	*new;
	//add new words 
	list = NULL;
	new = ft_lstnew("Monster");
	ft_lstadd_front(&list, new);

	new = ft_lstnew("your");
	ft_lstadd_front(&list, new);

	new = ft_lstnew("Welcome");
	ft_lstadd_front(&list, new);
	//ptint size 
	printf("List size: %d\n", ft_lstsize(list));
	
	// print list content 
	t_list	*finallst;
	
	finallst = list;
	while (finallst)
	{
		printf("%s -> ", (char *)finallst->content);
		finallst = finallst->next;
	}
	printf("NULL\n");
}*/