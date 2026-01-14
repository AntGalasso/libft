/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:00:12 by pneto             #+#    #+#             */
/*   Updated: 2025/12/09 15:39:22 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
/*void *ft_toupper(void *str)
{
    char *s = (char *)str;
    char *res = malloc(ft_strlen(s) + 1);
    if (!res) return (NULL);
    for (int i = 0; s[i]; i++)
        res[i] = (s[i] >= 'a' && s[i] <= 'z') ? s[i] - 32 : s[i];
    res[ft_strlen(s)] = '\0';
    return (res);
}

void del(void *content) { free(content); }

int main(void)
{
    t_list *lst = ft_lstnew("hello");
    ft_lstadd_back(&lst, ft_lstnew("world"));
    
    t_list *mapped = ft_lstmap(lst, ft_toupper, del);
    ft_lstiter(mapped, ft_print_content); // assuming ft_print_content exists
    
    ft_lstclear(&lst, del);
    ft_lstclear(&mapped, del);
    return (0);
}*/