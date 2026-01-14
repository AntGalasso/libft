/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:59:22 by pneto             #+#    #+#             */
/*   Updated: 2025/12/10 15:46:57 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*int main()
{
	t_list *list;

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew("first"));
	ft_lstadd_back(&list, ft_lstnew("second"));
	ft_lstadd_back(&list, ft_lstnew("last"));
	
	t_list *current;

	current = list;
	while (current)
	{
		printf("%s -> ", (char *)current->content);
		current = current->next;
	}
	printf("NULL\n");


}*/