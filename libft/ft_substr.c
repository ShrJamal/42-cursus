/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:10:36 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 14:59:44 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_calloc(1, sizeof(char)));
	else if (slen <= start + len)
		substr = malloc((slen - start + 1) * sizeof(char));
	else
		substr = malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/* int	main(void)
{
	printf("%s\n", ft_substr("Helloo", 2, 5));
	printf("%s\n", ft_substr("Helloo", 4, 10));
	printf("%s\n", ft_substr("Helloo", 0, 3));
	printf("%s\n", ft_substr("Helloo", 10, 1));
} */
