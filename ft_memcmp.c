/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:16:18 by pneto             #+#    #+#             */
/*   Updated: 2025/12/05 17:31:53 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	const unsigned char	ptr1[] = "Welcome, to the Monster Ball";
	const unsigned char ptr2[] = "Welcome, to the Monster Ball";
	const unsigned char ptr3[] = "Xelcome, to the Monster Ball";
	size_t n = 30;

	int	result1 = ft_memcmp(ptr1, ptr2, n);
	int	result2 = ft_memcmp(ptr2, ptr3, n);
	int	result3 = memcmp(ptr1, ptr2, n);
	int	result4 = memcmp(ptr2, ptr3, n);
	printf("Comparison of ptr1 e ptr2: %d\n", result1);
	printf("Comparison of ptr2 e ptr3: %d\n", result2);
	printf("TRUE Comparison of ptr1 e ptr2: %d\n", result3);
	printf("TRUE Comparison of ptr2 e ptr3: %d\n", result4);
}*/