/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:50:22 by jasahrao          #+#    #+#             */
/*   Updated: 2022/11/04 11:10:58 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char	*tmp[OPEN_MAX];
	char		*t;
	char		*line;
	int			len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp[fd] = ft_read_line(fd, tmp[fd]);
	len = ft_strchr(tmp[fd], '\n') - tmp[fd] + 1;
	line = ft_substr(tmp[fd], 0, len);
	t = tmp[fd];
	tmp[fd] = ft_substr(tmp[fd], len, ft_strlen(tmp[fd]) - len);
	return (free(t), line);
}
