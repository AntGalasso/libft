/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:02:01 by pneto             #+#    #+#             */
/*   Updated: 2025/11/26 15:02:03 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		d = d + n;
		s = s + n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

/*int main()
{
	char str[] = "WHOISBAD?";
	//dest str+3 lettera I
	//src str+2 lettera O
	//dest = dest+n [3]+3 = B
	//src + src+n [2]+3 S
	printf("%s\n", str);
	ft_memmove(str+3, str+2, 3);
	printf("%s\n", str);
}*/
