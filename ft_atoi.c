/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:18:54 by pneto             #+#    #+#             */
/*   Updated: 2025/12/02 18:20:22 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}
/*int	main()
{
	const char *str1 = "   -98745ghsdc";
	const char *str2 = "   ++++55874hgfx";
	const char *str3 = "69 bla bla bla";
	
	printf("ft_atoi(%s) = %d\n", str1, ft_atoi(str1));
	printf("atoi(%s) = %d\n", str1, atoi(str1));
	printf("ft_atoi(%s) = %d\n", str2, ft_atoi(str2));
	printf("atoi(%s) = %d\n", str2, atoi(str2));
	printf("ft_atoi(%s) = %d\n", str3, ft_atoi(str3));
	printf("atoi(%s) = %d\n", str3, atoi(str3));
}*/