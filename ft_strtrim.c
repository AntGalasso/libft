/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:14:44 by pneto             #+#    #+#             */
/*   Updated: 2025/12/02 17:26:27 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tstr;
	int		start;
	int		end;
	int		i;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	tstr = (char *)malloc(end - start + 2);
	if (!tstr)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		tstr[i] = s1[start + i];
		i++;
	}
	tstr[i] = '\0';
	return (tstr);
}
/*int main()
{
	printf("%s\n", ft_strtrim("xycxyomexy", "xy"));
	printf("%s\n", ft_strtrim("ffff", "f"));
	printf("%s\n", ft_strtrim("WoohooW", "W"));
}*/