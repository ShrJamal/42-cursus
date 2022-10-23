/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:27:14 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/23 09:01:18 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1)
		return (NULL);
	if (!set)
		return ft_strdup(s1);
	start = 0;
	while (s1[start] && ft_inset(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_inset(s1[end], set))
		end--;
	if (end < 0)
		return (ft_calloc(1, sizeof(char)));
	return (ft_substr(s1, start, (end - start + 1)));
}
