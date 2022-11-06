/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:22:59 by jasahrao          #+#    #+#             */
/*   Updated: 2022/11/06 10:13:43 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int hex, char format)
{
	if (hex >= 16)
		return (ft_puthex(hex / 16, format) + ft_puthex(hex % 16, format));
	else if (format == 'X')
		return (ft_putchar("0123456789ABCDEF"[hex]));
	else
		return (ft_putchar("0123456789abcdef"[hex]));
}
