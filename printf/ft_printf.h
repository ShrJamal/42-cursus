/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:10:41 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 22:18:34 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *c, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putptr(size_t ptr);
int	ft_puthex(unsigned int hex, char format);
int	ft_putnbr(long nbr);

#endif