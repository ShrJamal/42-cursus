/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:22:59 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 19:52:04 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printptr(size_t ptr)
{
	if (ptr >= 16)
		return (ft_printptr(ptr / 16) + ft_printptr(ptr % 16));
	else if (ptr <= 9)
		return (ft_putchar((ptr + '0')));
	return (ft_putchar((ptr - 10 + 'a')));
}

int	ft_putptr(size_t ptr)
{
	int	len;

	len = 0;
		len += write(1, "0x", 2);
	if (ptr == 0)
		return (write(1, "0", 1) + len);
	return (ft_printptr(ptr) + len);
}
