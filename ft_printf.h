/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:49:07 by rrakman           #+#    #+#             */
/*   Updated: 2022/12/05 18:34:57 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int	ft_putchar(char c);
int	ft_strlen(const char *s);
int ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_printhex(unsigned int nb, char c);
static int	ft_hex(unsigned int num, char c);

# endif