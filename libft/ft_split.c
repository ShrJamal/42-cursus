/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:33:17 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/13 09:43:35 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_err(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	return (NULL);
}

static int	ft_words_count(char const *s, char c)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			wc++;
		while (*s && *s != c)
			s++;
	}
	return (wc);
}

static char	*ft_word(char const *s, char c, int *j)
{
	char	*word;
	int		len;

	while (s[*j] && s[*j] == c)
		(*j)++;
	len = 0;
	while (s[*j + len] && s[*j + len] != c)
		len++;
	word = ft_substr(s, *j, len);
	(*j) += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		wc;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	wc = ft_words_count(s, c);
	res = malloc((wc + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < wc)
	{
		res[i] = ft_word(s, c, &j);
		if (!res[i])
			return (ft_malloc_err(res));
		i++;
	}
	res[i] = 0;
	return (res);
}
