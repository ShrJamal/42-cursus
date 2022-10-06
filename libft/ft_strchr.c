/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:01:29 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/06 13:42:56 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return (char *)&s[i];
	return (0);
}

int main()
{
	printf("Res:%s\n", ft_strchr("Hello", 'e'));
	printf("Res:%s\n", ft_strchr("Hello", 'l'));
	printf("Res:%s\n", ft_strchr("Hello", ' '));
	printf("Res:%s\n", ft_strchr("Hello", '\0'));
	printf("Res:%s\n", ft_strchr("", ' '));
	printf("Res:%s\n", ft_strchr("", 'a'));
}