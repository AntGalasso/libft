/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:54:14 by pneto             #+#    #+#             */
/*   Updated: 2025/11/26 16:54:16 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	p;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	p = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (p < size - dst_len - 1 && src[p])
	{
		dst[dst_len + p] = src[p];
		p++;
	}
	dst[dst_len + p] = '\0';
	return (dst_len + src_len);
}

/*int	main(void)
{
	char dest[6] = "Pedro";
	char *src = " Lisboa";
	
	size_t	result = ft_strlcat(dest, src, 13);
	printf("%s\n", dest);
	printf("%zu\n", result);
	return (0);
}*/
