/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:33:38 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 15:33:12 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{

	unsigned int p1 = 12;
	unsigned int p2 = -12;
	int len1 = ft_printf("%u-%u\n", p1, p2);
	int len2 = printf("%u-%u\n", p1, p2);
	printf("len1:%d == len2:%d", len1, len2);
}