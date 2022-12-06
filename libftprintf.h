/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:49:07 by rrakman           #+#    #+#             */
/*   Updated: 2022/12/06 20:05:57 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<stdarg.h>

int	ft_putchar(char c);
int	ft_strlen(const char *s);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_printhex(unsigned long nb, char c);
int	ft_hex(unsigned long num, char c);
int	ft_putunsigned(unsigned int n);
int	ft_putptr(void *ptr);

#endif