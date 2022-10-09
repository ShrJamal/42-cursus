/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:20:29 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 14:59:44 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (i < len)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/* int main()
{
	printf("%s\n", ft_strdup("Helloo"));
	printf("%s\n", ft_strdup(""));
	printf("%s\n", ft_strdup("A"));
} */