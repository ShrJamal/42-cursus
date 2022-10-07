/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:06:26 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/07 14:38:39 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i-- > 0)
		if (s[i] == c)
			return (char *)&s[i];
	if (c == '\0' && i >= 0)
		return (char *)&s[i];
	return (0);
}

// int main()
// {
// 	printf("Res:%s\n", strrchr("Hello", 'e'));
// 	printf("Res:%s\n", strrchr("Hello", 'l'));
// 	printf("Res:%s\n", strrchr("Hello", 'o'));
// 	printf("Res:%s\n", strrchr("Hello", 'a'));
// 	printf("Res:%s\n", strrchr("Hello", '\0'));
// 	printf("Res:%s\n", strrchr("", ' '));
// 	printf("Res:%s\n", strrchr("", 'a'));
// 	printf("Res:%s\n", strrchr("", '\0'));
// }
