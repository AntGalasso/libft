/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:55:27 by pneto             #+#    #+#             */
/*   Updated: 2025/12/03 18:36:00 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int	main()
{
	const char *str; 
	const char *str2;
	char	*result;
	char	*result2;
	
	str = "FLORENCE";
	str2 = "FLORENCE";
	result = ft_strchr(str, 'R');
	result2 = strchr(str2, 'R');
	if (result)
	{
		printf("%s\n", result );
		printf("%s\n", result2);
	}
}*/
