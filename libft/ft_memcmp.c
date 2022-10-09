/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:28:41 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 14:57:16 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;
	size_t			i;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (x[i] != y[i])
			return (x[i] - y[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d/%d\n", ft_memcmp("abc", "azu", 1), memcmp("abc", "azu", 1));
	printf("%d/%d\n", ft_memcmp("aza", "abz", 3), memcmp("aza", "abz", 3));
	printf("%d/%d\n", ft_memcmp("abc", "abc", 5), memcmp("abc", "abc", 5));
	printf("%d/%d\n", ft_memcmp("", "", 5), memcmp("", "", 5));
	printf("%d/%d\n", ft_memcmp("abcde", "abc", 6), memcmp("abcde", "abc",
				6));
	printf("%d/%d\n", ft_memcmp("abc", "abcde", 4), memcmp("abc", "abcde",
				4));
} */
