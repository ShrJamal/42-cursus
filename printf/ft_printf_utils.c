/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:30:49 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 12:11:17 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	len;

	if (!s)
		return (0);
	len = -1;
	while (s[++len])
		ft_putchar(s[len]);
	return (len);
}

int	ft_puthex(size_t ptr)
{
	static int len;

	if (len == 0)
	{
		len += write(1, "0x", 2);
		if (ptr == 0)
			return (len += write(1, "0", 1), len);
	}
	if (ptr >= 16)
	{
		ft_puthex(ptr / 16);
		ft_puthex(ptr % 16);
	}
	else if (ptr <= 9)
		len += ft_putchar((ptr + '0'));
	else
		len += ft_putchar((ptr - 10 + 'a'));
	return (len);
}