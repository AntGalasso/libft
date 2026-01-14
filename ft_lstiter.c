/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:51:12 by pneto             #+#    #+#             */
/*   Updated: 2025/12/09 14:58:34 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main()
{
    t_list *node1 = ft_lstnew(ft_strdup("Hello"));
    t_list *node2 = ft_lstnew(ft_strdup("World"));
    node1->next = node2;

    ft_lstiter(node1, print_content); // Prints "Hello", then "World"

    ft_lstclear(&node1, free);
    return 0;
}*/
