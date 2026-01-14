/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:36:34 by pneto             #+#    #+#             */
/*   Updated: 2025/11/25 15:36:37 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

/*int main(void)
{
	char *c;
	
	c = "SUP";
	printf("%zu\n", ft_strlen(c));
	printf("%lu\n", strlen(c));
	return(0);
}*/
