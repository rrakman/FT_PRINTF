/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:47:29 by rrakman           #+#    #+#             */
/*   Updated: 2022/12/05 02:57:33 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *format, ... )
{
	va_list args;
	va_start(args, format);
	
	int i;
	int count;
	
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if(format[i] == 'c') {
				count += ft_putchar(va_arg(args,int));
			}
			else if(format[i] == 's') {
				count += ft_putstr(va_arg(args,char *));
			}
			else if(format[i] == 'd' || format[i] == 'i') {
				count += ft_putnbr(va_arg(args,int));
			}
			else if(format[i] == '%') {
				count += ft_putchar('%');
			}
			i++;
		}
		else {
			count += ft_putchar(format[i++]);
		}
	}
	va_end(args);
	return (count);
}

// int main()
// {
// 	ft_printf("Helllo bios %s %c %d %i %%","Hello",'z',69);
// }