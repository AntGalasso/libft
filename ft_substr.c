/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:18:29 by pneto             #+#    #+#             */
/*   Updated: 2025/12/09 18:11:29 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*int main()
{
	const char  s[] = "welcome, to the Monster Ball";
	char    *result; 
	
	result = ft_substr(s, 9, 2);
	printf("%s\n", result);
	free(result);
	
	result = ft_substr(s, 1, 30);
	printf("%s\n", result);
	free(result);

	result = ft_substr(s, 15, 8);
	printf("%s\n", result);
	free(result);
	
	result = ft_substr(s, 1, 0);
	printf("%s\n", result);
	free(result);
}*/