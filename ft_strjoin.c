/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:28:45 by pneto             #+#    #+#             */
/*   Updated: 2025/12/02 17:12:17 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len;
	int		p;
	int		n;

	p = 0;
	n = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	while (s1[p] != '\0')
	{
		new[p] = s1[p];
		p++;
	}
	while (s2[n] != '\0')
	{
		new[p + n] = s2[n];
		n++;
	}
	new[p + n] = '\0';
	return (new);
}
/*int main()
{
	printf("%s\n", ft_strjoin("BABO", " NATALE"));
	
}*/