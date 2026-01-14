/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:28:58 by pneto             #+#    #+#             */
/*   Updated: 2025/11/27 18:29:00 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lenlittle;
	size_t	i;
	size_t	j;

	lenlittle = ft_strlen(little);
	if (big == little || lenlittle == 0)
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] != '\0' && little[j] != '\0'
			&& (i + j) < len && big[i + j] == little[j])
		{
			j++;
			if ((j == len && j == lenlittle) || j == lenlittle)
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	const char *big = "Welcome to the Monster Ball";
	const char *little = "Monster";
	size_t	len = 25;
	//printf("%s\n", strnstr(big, little, len));
	printf("%s\n", ft_strnstr(big, little, len));

}*/
