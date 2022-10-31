/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:22:59 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 15:18:37 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printhex(size_t hex)
{
	if (hex >= 16)
		return (ft_printhex(hex / 16) + ft_printhex(hex % 16));
	else if (hex <= 9)
		return (ft_putchar((hex + '0')));
	else
		return (ft_putchar((hex - 10 + 'a')));
}

int	ft_puthex(size_t hex)
{
	write(1, "0x", 2);
	if (hex == 0)
		return (write(1, "0", 1) + 2);
	return (ft_printhex(hex) + 2);
}
