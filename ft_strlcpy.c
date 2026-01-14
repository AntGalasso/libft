/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:23:15 by pneto             #+#    #+#             */
/*   Updated: 2025/11/26 16:23:20 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	src[15] = "Ciaoooooooo";
	char	dest[15];
	size_t	n = 5;
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, n));
	printf("%s\n", dest);
	return(0);
}*/
