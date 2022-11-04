/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:22:59 by jasahrao          #+#    #+#             */
/*   Updated: 2022/11/04 11:16:37 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printptr(size_t ptr)
{
	if (ptr < 16)
		return (ft_putchar("0123456789abcdef"[ptr]));
	return (ft_printptr(ptr / 16) + ft_printptr(ptr % 16));
}

int	ft_putptr(size_t ptr)
{
	int	len;

	len = write(1, "0x", 2);
	if (len < 2)
		return (len);
	if (ptr == 0)
		return (write(1, "0", 1) + len);
	return (ft_printptr(ptr) + len);
}
