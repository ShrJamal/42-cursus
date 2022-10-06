/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:00:11 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/06 13:35:15 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

// int main()
// {
// 	printf("Strlen: %d\n", ft_strlen("abc"));
// 	printf("Strlen: %d\n", ft_strlen(""));
// 	printf("Strlen: %d\n", ft_strlen("123456789"));
// }
