/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:33:17 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/11 10:53:49 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_err(char **arr)
{
	while (*arr)
	{
		free(*arr);
		arr++;
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
	int		i;
	int		len;

	len = ft_strlen(s);
	word = malloc(len * sizeof(char));
	if (!word)
		return (NULL);
	while (s[*j] && s[*j] == c)
		(*j)++;
	i = 0;
	while (s[*j] && s[*j] != c)
		word[i++] = s[(*j)++];
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
