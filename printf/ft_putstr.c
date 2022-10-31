/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:22:59 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 22:35:14 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	len;
	int	i;

	if (!s)
		return (ft_putstr("(null)"));
	i = -1;
	len = 0;
	while (s[++i])
		len += ft_putchar(s[i]);
	return (len);
}
