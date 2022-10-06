/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:58:09 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/06 13:32:48 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	printf("lower: %c\n", ft_tolower('A'));
// 	printf("lower: %c\n", ft_tolower('M'));
// 	printf("lower: %c\n", ft_tolower(' '));
// 	printf("lower: %c\n", ft_tolower('Z'));
// }
