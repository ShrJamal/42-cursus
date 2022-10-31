/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:22:59 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 15:38:37 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printhex(size_t hex, char format)
{
	if (hex >= 16)
		return (ft_printhex(hex / 16, format) + ft_printhex(hex % 16, format));
	else if (hex <= 9)
		return (ft_putchar((hex + '0')));
	else if (format == 'X')
		return (ft_putchar((hex - 10 + 'A')));
	else
		return (ft_putchar((hex - 10 + 'a')));
}

int	ft_puthex(size_t hex, char format)
{
	int len;

	len = 0;
	if (format == 'p')
		len += write(1, "0x", 2);
	if (hex == 0)
		return (write(1, "0", 1) + len);
	return (ft_printhex(hex, format) + len);
}
