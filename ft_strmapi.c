/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:55:12 by pneto             #+#    #+#             */
/*   Updated: 2025/12/03 19:50:09 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	nstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!nstr)
		return (NULL);
	while (s[i] != '\0')
	{
		nstr[i] = f(i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
/*static char	my_toupper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int main()
{
	char	*s = "welcome to the monster ball";
	char	*result;
	
	result = ft_strmapi(s, my_toupper);
	if (result)
	{
		printf("%s\n", result);
		free (result);
	}
}*/
