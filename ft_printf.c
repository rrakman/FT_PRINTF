/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:47:29 by rrakman           #+#    #+#             */
/*   Updated: 2022/12/06 20:26:30 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle(va_list args, char c)
{
	int	count;
	
	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'x' || c == 'X')
		count += ft_printhex(va_arg(args, unsigned int), c);
	else if (c == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (c == '%')
		count += ft_putchar('%');
}

int	ft_printf(char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_handle(args,format[i]);
			i++;
		}
		else
			count += ft_putchar(format[i++]);
	}
	va_end(args);
	return (count);
}
// int main()
// {
// 	long i;
// 	long d = 0;
// 	char *str = "aa";
// 	i = 0;
// 	i = ft_printf("Helllo bios %p reda\n",str);
// 	d = printf("Helllo bios %p reda\n",str);
// 	ft_printf("%i\n",i);
// 	ft_printf("%i\n",d);
// }