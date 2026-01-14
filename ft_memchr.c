/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:22:52 by pneto             #+#    #+#             */
/*   Updated: 2025/11/28 15:48:17 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *) &ptr[i]);
		i++;
	}
	return (NULL);
}
/*int main()
{
	const char str[] = "Welcome, to the Monster Ball";
	int c = 'M';
	size_t  n = 30;

	char *result = (char *)ft_memchr(str, c, n);
	if (result)
		printf("Character found: %c\n", *result);
	else
		printf("Character not found\n");
}*/