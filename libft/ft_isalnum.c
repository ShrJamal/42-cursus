/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:53:44 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 14:56:22 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

/* int main()
{
	printf("%d\n", ft_isalnum(48));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('?'));
} */