/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:17:11 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/04 17:17:11 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

double	ft_atod(char *s)
{
	double	res;
	double	dec;
	int		i;
	int		sign;
	long	pow;

	sign = 1;
	i = 0;
	res = 0;
	while (s && ft_isspace(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			sign = -1;
	while (s[i] >= '0' && s[i] <= '9')
		res = res * 10 + (s[i++] - '0');
	if (s[i] != '.' && s[i] != ',')
		return (sign * res);
	dec = 0;
	pow = 1;
	while (s[++i] >= '0' && s[i] <= '9')
	{
		dec = dec * 10 + (s[i] - '0');
		pow *= 10;
	}
	return (sign * (res + dec / pow));
}
