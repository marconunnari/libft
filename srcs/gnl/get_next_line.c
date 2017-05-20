/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 17:51:47 by mnunnari          #+#    #+#             */
/*   Updated: 2017/05/17 19:01:15 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				process_buffer(char *buffer, char **line, t_remain *remain)
{
	char		*newline;
	char		*old;

	if ((newline = ft_strchr(buffer, '\n')))
	{
		*line = ft_strmerge(*line, ft_strsub(buffer, 0, newline - buffer));
		old = remain->content;
		remain->content = ft_strdup(newline + 1);
		free(old);
		return (1);
	}
	if (*line)
		*line = ft_strmerge(*line, ft_strdup(buffer));
	else
		*line = buffer;
	ft_strdel(&remain->content);
	return (0);
}

int				process_fd(t_remain *remain, char **line)
{
	char			*buffer;
	int				ret;

	*line = ft_strnew(0);
	if (remain->content)
	{
		if (process_buffer(remain->content, line, remain) == 1)
			return (1);
	}
	if((buffer = ft_strnew(GNL_BUFF_SIZE + 1)) == NULL)
		return (-1);
	if (read(remain->fd, buffer, 0) < 0)
		return (-1);
	while ((ret = read(remain->fd, buffer, GNL_BUFF_SIZE)) > 0)
	{
		ret = process_buffer(buffer, line, remain);
		ft_strdel(&buffer);
		if (ret == 1)
			return (1);
		if ((buffer = ft_strnew(GNL_BUFF_SIZE + 1)) == NULL)
			return (-1);
	}
	ft_strdel(&buffer);
	if (ret == -1)
		return (-1);
	if (*line && !ft_strequ(*line, ""))
		return (1);
	return (0);
}

t_remain		*create_remain(t_list **remains, int fd)
{
	t_list			*remainsptr;
	t_remain		*remain;

	if (!(remain = (t_remain*)malloc(sizeof(t_remain))))
		return (NULL);
	remain->fd = fd;
	remain->content = NULL;
	if (!(remainsptr = ft_lstnew(remain, sizeof(t_remain))))
		return (NULL);
	if (*remains)
		ft_lstadd(remains, remainsptr);
	else
		*remains = remainsptr;
	free(remain);
	remain = (t_remain*)(*remains)->content;
	return (remain);
}

t_remain		*find_remain(t_list *remains, int fd)
{
	t_list			*remainsptr;
	t_remain		*remain;

	remain = NULL;
	if (remains)
	{
		remainsptr = remains;
		while (remainsptr && !remain)
		{
			remain = (t_remain*)remainsptr->content;
			if (!(remain->fd == fd))
				remain = NULL;
			remainsptr = remainsptr->next;
		}
	}
	return (remain);
}

int				get_next_line(const int fd, char **line)
{
	static t_list		*remains;
	t_remain			*remain;

	if (fd < 0 || !line)
		return (-1);
	remain = find_remain(remains, fd);
	if (!remain)
		remain = create_remain(&remains, fd);
	if (!remain)
		return (-1);
	return (process_fd(remain, line));
}
