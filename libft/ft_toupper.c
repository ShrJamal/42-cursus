/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:58:47 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/06 13:34:53 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int main()
// {
// 	printf("toupper: %c\n", ft_toupper('a'));
// 	printf("toupper: %c\n", ft_toupper('m'));
// 	printf("toupper: %c\n", ft_toupper(' '));
// 	printf("toupper: %c\n", ft_toupper('z'));
// }
