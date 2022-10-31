/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:33:38 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/31 11:58:38 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int len1 = ft_printf("Hello %s\n", "World!12");
	int len2 = printf("Hello %s\n", "World!12");
	printf("len1:%d == len2:%d", len1, len2);
}