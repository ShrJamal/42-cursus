/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:46:05 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/10 15:43:44 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	unsigned int	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	ft_lowercase(unsigned int i, char c)
{
	return (ft_tolower(c));
}

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("ABCD", &ft_lowercase));
// 	printf("%s\n", ft_strmapi("AbcD", &ft_lowercase));
// 	printf("%s\n", ft_strmapi("", &ft_lowercase));
// }