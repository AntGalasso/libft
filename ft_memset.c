/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:06:11 by pneto             #+#    #+#             */
/*   Updated: 2025/11/25 17:06:15 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			p;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	p = 0;
	while (p < n)
	{
		ptr[p] = c;
		p++;
	}
	return (ptr);
}

/*int	main()
{
	char str[] = "SUPER";
	char str2[] = "SUPER";
	char cara;

	cara = '&';

	ft_memset(str,cara,5);
	printf("%s\n", str);
	
	memset(str2,cara,5);
	printf("%s\n", str2);
}*/
