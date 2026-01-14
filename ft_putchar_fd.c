/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:48:13 by pneto             #+#    #+#             */
/*   Updated: 2025/12/04 20:13:32 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main()
{
	ft_putchar_fd('P', 1);
	ft_putchar_fd('E', 1);
	ft_putchar_fd('D', 1);	
	ft_putchar_fd('R', 1);
	ft_putchar_fd('O', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('L', 1);
	ft_putchar_fd('I', 1);
	ft_putchar_fd('S', 1);	
	ft_putchar_fd('B', 1);
	ft_putchar_fd('O', 1);
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('N', 1);
	ft_putchar_fd('E', 1);
	ft_putchar_fd('T', 1);	
	ft_putchar_fd('O', 1);
}*/