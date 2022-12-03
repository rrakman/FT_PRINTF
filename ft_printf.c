/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:47:29 by rrakman           #+#    #+#             */
/*   Updated: 2022/12/03 16:35:32 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int main ()
{
	int i = 'M';
	printf("%X",i);
	//printf("add2 = %d", add(5,2,2,1,100,80));
}
