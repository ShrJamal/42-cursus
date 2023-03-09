/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:17:11 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/09 12:43:58 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

static double	ft_get_decimal(char *s)
{
	int		i;
	long	pow;
	double	dec;

	dec = 0;
	pow = 1;
	i = -1;
	while (ft_isdigit(s[++i]))
	{
		dec = dec * 10 + (s[i] - '0');
		pow *= 10;
	}
	return (dec / pow);
}

double	ft_atod(char *s)
{
	int		i;
	int		sign;
	double	res;

	sign = 1;
	i = 0;
	res = 0;
	while (s && ft_isspace(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			sign = -1;
	while (ft_isdigit(s[i]))
		res = res * 10 + (s[i++] - '0');
	if (s[i] != '.' && s[i] != ',')
		return (sign * res);
	return (sign * (res + ft_get_decimal(s + i + 1)));
}
