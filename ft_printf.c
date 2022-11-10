/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:47:29 by rrakman           #+#    #+#             */
/*   Updated: 2022/11/08 16:39:02 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdarg.h>

int	add(char *args, ... )
{
	va_list ap;
	va_start(ap, args);
	int i = 0;
	int sum = 0;
	while (i < 2)
	{
		sum += va_arg(ap,int);
		i++;
	}
	va_end(ap);
	return (sum);
}
#include<stdio.h>
int main ()
{
	ft_putstr("Helloworld!!");
	ft_putchar('\n');
	//printf("add2 = %d", add(5",2,2,1,100,80));
}
