/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreenew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 15:11:36 by mnunnari          #+#    #+#             */
/*   Updated: 2017/05/14 15:14:05 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*ft_btreenew(void *content, size_t content_size)
{
	t_btree		*new;

	new = (t_btree*)malloc(sizeof(t_btree));
	new->content = content;
	new->content_size = content_size;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
