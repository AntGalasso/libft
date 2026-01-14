/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:20:00 by pneto             #+#    #+#             */
/*   Updated: 2025/12/05 17:14:17 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

/*int main()
{
	char src[] = "There are no more tears to cry";
	char src2[] = "There are no more tears to cry";
	char dest[30];
	char dest2[30];
	ft_memcpy(dest, src, 17);
	printf("%s\n", dest);
	memcpy(dest2, src2, 17);
	printf("%s\n", dest2);
}*/
