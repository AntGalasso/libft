/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:17:12 by pneto             #+#    #+#             */
/*   Updated: 2025/12/03 20:16:51 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int main()
{
	printf("%d\n", ft_isprint(0100));
	printf("%d\n", isprint(25));
	printf("%d\n", ft_isprint(84));
	printf("%d\n", isprint(84));
}*/
