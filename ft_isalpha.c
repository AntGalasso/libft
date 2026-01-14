/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:39:11 by pneto             #+#    #+#             */
/*   Updated: 2025/11/25 13:39:18 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	else
		return (1);
}

/*int main(void)
{
	int c;
	
	c = 'a';
	printf("%d\n", isalpha(c));
	printf("%d\n", ft_isalpha(c));
	return (0);
}*/
