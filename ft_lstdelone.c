/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:03:11 by pneto             #+#    #+#             */
/*   Updated: 2025/12/08 18:18:02 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void	del(void *content)
{
	free(content);
}

int main()
{
	char 	*str;
	t_list	*node;

	str = ft_strdup("test");
	node = ft_lstnew(str);

	ft_lstdelone(node, del);
	printf("test passed");
}*/