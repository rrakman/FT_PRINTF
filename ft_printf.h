/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:49:07 by rrakman           #+#    #+#             */
/*   Updated: 2022/11/08 16:28:27 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_putchar(char c);
int	ft_strlen(const char *s);
int ft_putstr(char *s);

# endif