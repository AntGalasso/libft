/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:11:17 by pneto             #+#    #+#             */
/*   Updated: 2025/12/01 14:16:54 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	l;

	l = 0;
	while (src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = malloc(ft_strlen (s) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, s);
	return (dst);
}
/*int	main()
{
	char	src[] = "Welcome to the Monster Ball";
	char	*dup; 
	char	src2[] = "Welcome to the Monster Ball";
	char	*dup2; 
	
	dup = ft_strdup(src);
	dup2 = strdup(src2);
	printf("%s\n", dup);
	printf("%s\n", src);
	printf("%s\n", dup2);
	printf("%s\n", src2);
	free(dup);
	free(dup2);
}*/