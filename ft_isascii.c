/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:42:59 by pneto             #+#    #+#             */
/*   Updated: 2025/11/25 14:43:04 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}

/*int main()
{
	printf("%d\n", ft_isascii(0));
	printf("%d\n", isascii(0));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", isascii(127));
}*/
