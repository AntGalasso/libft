/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:17:12 by pneto             #+#    #+#             */
/*   Updated: 2025/11/25 18:17:16 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			p;

	str = (unsigned char *)s;
	p = 0;
	while (p < n)
	{
		str[p] = 0;
		p++;
	}
}

/*int	main()
{
	char str[] = "SUPER";
	char str2[] = "SUPER";

	ft_bzero(str, 1);
	printf("%s\n", str);	
	bzero(str2, 1);
	printf("%s\n", str2);
}*/
