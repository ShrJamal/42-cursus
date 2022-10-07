/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:10:36 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/07 17:37:14 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return ((char *)ft_calloc(1, sizeof(char)));
	if (start + len >= slen)
		substr = malloc(sizeof(char) * (slen - start + 1));
	else
		substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

int	main(void)
{
	printf("%s\n", ft_substr("Helloo", 2, 5));
	printf("%s\n", ft_substr("Helloo", 4, 10));
	printf("%s\n", ft_substr("Helloo", 0, 10));
	printf("%s\n", ft_substr("Helloo", 10, 10));
}
