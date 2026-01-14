/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:20:59 by pneto             #+#    #+#             */
/*   Updated: 2025/12/04 21:10:52 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int	main()
{
	char *str = "Welcome to the Monster Ball";
	t_list *text = ft_lstnew(str);
	if (!text)
	{
		printf("Memory allocation failed\n");
		return(1);
	}
	printf("text allocated successfully\n");
	printf("%s\n", (char *)text->content);
	free(text);
}*/