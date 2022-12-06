/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:00:00 by rrakman           #+#    #+#             */
/*   Updated: 2022/12/06 20:11:29 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hex(unsigned long num, char c)
{
	const char	*hex;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	write(1, &hex[num], 1);
	return (1);
}

int	ft_printhex(unsigned long nb, char c)
{
	int	cnt;

	cnt = 0;
	if (nb < 16)
		cnt += ft_hex(nb, c);
	else
	{
		cnt += ft_printhex(nb / 16, c);
		cnt += ft_hex(nb % 16, c);
	}
	return (cnt);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	addr;

	count = 0;
	ft_putstr("0x");
	addr = (unsigned long)ptr;
	count += ft_printhex(addr, 'x');
	return (count + 2);
}
