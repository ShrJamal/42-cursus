/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:30:49 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 22:18:05 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_nbr(long nbr)
{
	if (nbr < 10)
		return (ft_putchar(nbr + '0'));
	return (ft_print_nbr(nbr / 10) + ft_putchar(nbr % 10 + '0'));
}

int	ft_putnbr(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr *= -1;
	}
	len += ft_print_nbr(nbr);
	return (len);
}
