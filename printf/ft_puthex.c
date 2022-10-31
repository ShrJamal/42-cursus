/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:22:59 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 22:33:17 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printhex(unsigned int hex, char format)
{
	if (hex >= 16)
		return (ft_printhex(hex / 16, format) + ft_printhex(hex % 16, format));
	else if (format == 'X')
		return (ft_putchar("0123456789ABCDEF"[hex]));
	else
		return (ft_putchar("0123456789abcdef"[hex]));
}

int	ft_puthex(unsigned int hex, char format)
{
	int	len;

	len = 0;
	if (hex == 0)
		return (write(1, "0", 1) + len);
	return (ft_printhex(hex, format) + len);
}
