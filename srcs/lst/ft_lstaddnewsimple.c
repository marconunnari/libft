/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddnewsimple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 18:06:42 by mnunnari          #+#    #+#             */
/*   Updated: 2017/06/21 18:28:17 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddnewsimple(t_list **alst, void *content)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	ft_lstadd(alst, new);
}
