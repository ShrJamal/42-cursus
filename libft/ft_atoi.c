/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:57:38 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/06 13:16:18 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	printf("$%d$\n", ft_atoi("-1325632167"));
// 	printf("$%d$\n", ft_atoi("1325632167"));
// 	printf("$%d$\n", ft_atoi("-2147483648"));
// 	printf("$%d$\n", ft_atoi("\t-1234ab567"));
// 	printf("$%d$\n", ft_atoi("\n+1234ab567"));
// 	printf("$%d$\n", ft_atoi("2147483647"));
// 	printf("$%d$\n", ft_atoi("0123a456789"));
// 	printf("$%d$\n", ft_atoi("a123"));
// 	printf("$%d$\n", ft_atoi(""));
// }
