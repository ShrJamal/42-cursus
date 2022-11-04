/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:50:22 by jasahrao          #+#    #+#             */
/*   Updated: 2022/11/04 11:04:04 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read_line(int fd, char *tmp)
{
	char	*buff;
	int		rd;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (free(tmp), NULL);
	rd = 1;
	while (rd != 0 && !ft_strchr(tmp, '\n'))
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd == -1)
			return (free(tmp), free(buff), NULL);
		buff[rd] = '\0';
		tmp = ft_strjoin(tmp, buff);
	}
	return (free(buff), tmp);
}

char	*get_next_line(int fd)
{
	static char	*tmp;
	char		*t;
	char		*line;
	int			len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = ft_read_line(fd, tmp);
	len = ft_strchr(tmp, '\n') - tmp + 1;
	line = ft_substr(tmp, 0, len);
	t = tmp;
	tmp = ft_substr(tmp, len, ft_strlen(tmp) - len);
	return (free(t), line);
}
