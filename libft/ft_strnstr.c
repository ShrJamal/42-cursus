/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:02:49 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/07 17:07:33 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
		{
			if (!needle[j + 1])
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	{
// 		char str[] = "I'm learning c programming language";
// 		char find[] = "programming";
// 		printf("$%s$ - $%s$\n", ft_strnstr(str, find, 20), strstr(str, find));
// 	}
// 	{
// 		char str[] = "I'm learning c programming language";
// 		char find[] = "";
// 		printf("$%s$ - $%s$\n", ft_strnstr(str, find, 20), strstr(str, find));
// 	}
// 	{
// 		char str[] = "I'm learning c programming language";
// 		char find[] = "java";
// 		printf("$%s$ - $%s$\n", ft_strnstr(str, find, 20), strstr(str, find));
// 	}
// 	{
// 		char str[] = "";
// 		char find[] = "java";
// 		printf("$%s$ - $%s$\n", ft_strnstr(str, find, 20), strstr(str, find));
// 	}{
// 		char str[] = "";
// 		char find[] = "";
// 		printf("$%s$ - $%s$\n", ft_strnstr(str, find, 20), strstr(str, find));
// 	}
// }
