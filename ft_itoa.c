/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:44:15 by pneto             #+#    #+#             */
/*   Updated: 2025/12/03 18:52:53 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	len = digit_len(n);
	sign = n < 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else
	{
		while (n)
		{
			str[--len] = (n % 10) * (1 - 2 * sign) + '0';
			n /= 10;
		}
		if (sign)
			str[0] = '-';
	}
	return (str);
}

/*int	main()
{
	char *result;

    result = ft_itoa(42);
    printf("ft_itoa(42) = \"%s\"\n", result);
    free(result);
	
	result = ft_itoa(-42);
    printf   ("ft_itoa(-42) = \"%s\"\n", result); 
    free(result);

    result = ft_itoa(0);
    printf("ft_itoa(0) = \"%s\"\n", result); 
    free(result);
}*/