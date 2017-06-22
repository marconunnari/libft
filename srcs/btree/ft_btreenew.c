/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreenew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 15:11:36 by mnunnari          #+#    #+#             */
/*   Updated: 2017/06/22 21:11:57 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*ft_btreenew(void *content, size_t content_size)
{
	t_btree		*new;

	new = (t_btree*)malloc(sizeof(t_btree));
	if (!new)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else if (content_size == 0)
	{
		new->content = content;
	}
	else
	{
		new->content = malloc(content_size);
		if (!new->content)
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->left = NULL;
	new->right = NULL;
	return (new);
}
