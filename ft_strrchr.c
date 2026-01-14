/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:37:57 by pneto             #+#    #+#             */
/*   Updated: 2025/11/27 14:38:00 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*i;

	i = NULL;
	while (*s)
	{
		if (*s == (char)c)
			i = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (i);
}

/*int	main()
{
	const char	str[]= "AMOMRE";
	const char	str2[]= "AMOMRE";
	char	*result;
	char	*result2;
	
	result = ft_strrchr(str, 'M');
	result2 = strrchr(str2, 'M');
	if (result)
		printf("%s\n", result);
	else
			printf("No ocurrence");
	if (result2)
		printf("%s\n", result2);
	else
		printf("No ocurrence");
}*/
