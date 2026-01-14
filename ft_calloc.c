/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:26:45 by pneto             #+#    #+#             */
/*   Updated: 2025/12/09 15:47:42 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
/*int main()
{
   int *ptr = (int *)ft_calloc(5, sizeof(int));
	if (ptr)
	{
		printf("Values: [%d, %d, %d, %d, %d, %d]\n", ptr[0], ptr[1], ptr[2]);
		printf("Values: ", ptr[3], ptr[4] );
	}
	else
		printf("Allocation failed\n");
free(ptr);
}*/