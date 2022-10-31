/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:29:56 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 12:15:41 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *c, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_puthex(size_t ptr);
int	ft_putnbr(long long nbr);