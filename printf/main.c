/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:33:38 by jasahrao          #+#    #+#             */
/*   Updated: 2022/11/04 12:50:00 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

// #define TEST "%x-%X\n", LONG_MAX + 1, LONG_MAX + 1
#define TEST "aa%"

int	main(void)
{
	unsigned int	p1;
	unsigned int	p2;
	int				len1;
	int				len2;

	p1 = 12;
	p2 = -12;
	len1 = ft_printf(TEST);
	// len2 = printf(TEST);
	printf("\nlen1:%d == len2:%d", len1, len2);
}
