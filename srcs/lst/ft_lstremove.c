/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 22:44:56 by mnunnari          #+#    #+#             */
/*   Updated: 2017/06/20 22:52:16 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_list	*ft_lstremoveif(t_list *lst, void (*del)(void *, size_t),
				int (*f)(void*,void*), void *param)
{
	t_list		*tmp;

	if (!lst)
		return (NULL);
	if (f(lst->content, param))
	{
		tmp = lst->next;
		if (del)
			del(lst->content, lst->content_size);
		free(lst);
		return (tmp);
	}
	lst->next = ft_lstremoveif(lst->next, del, f, param);
	return (lst);
}

void			ft_lstremove(t_list **lst, void (*del)(void *, size_t),
				int (*f)(void*,void*), void *param)
{
	*lst = ft_lstremoveif(*lst, del, f, param);
}
