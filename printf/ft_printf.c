/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:30:49 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 12:57:34 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list *args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(*args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(*args, char *));
	else if (format == 'p')
		len += ft_puthex(va_arg(*args, size_t));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(*args, int));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int len;

	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
			len += ft_format(&args, *(++str));
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (len);
}