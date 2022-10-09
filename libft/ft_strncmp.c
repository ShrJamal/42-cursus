/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:14:08 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 13:24:41 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d/%d\n", ft_strncmp("abc", "azu", 1), strncmp("abc", "azu", 1));
// 	printf("%d/%d\n", ft_strncmp("aza", "abz", 3), strncmp("aza", "abz", 3));
// 	printf("%d/%d\n", ft_strncmp("abc", "abc", 5), strncmp("abc", "abc", 5));
// 	printf("%d/%d\n", ft_strncmp("", "", 5), strncmp("", "", 5));
// 	printf("%d/%d\n", ft_strncmp("abcde", "abc", 6), strncmp("abcde", "abc",
// 				6));
// 	printf("%d/%d\n", ft_strncmp("abc", "abcde", 4), strncmp("abc", "abcde",
// 				4));
// }
