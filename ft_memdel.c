/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:59:21 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/19 13:07:07 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_memdel(void **ap)
{
	if (ap)
	{
			if (*ap)
			{
				free(*ap);
				*ap = NULL;
			}
	}
}
