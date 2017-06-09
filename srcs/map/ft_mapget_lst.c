/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapget_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:37:47 by mnunnari          #+#    #+#             */
/*   Updated: 2017/06/09 11:17:07 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_mapget_lst(t_list *lst, void *key, int (*equ)(void*,void*))
{
	t_map	*map;

	while (lst)
	{
		map = (t_map*)lst->content;
		if (equ(key, map->key))
			return (map->value);
		lst = lst->next;
	}
	return (NULL);
}
