/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:59:35 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/19 11:05:58 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strdel(char **as)
{
	char	*str;
	int		i;

	if (as == NULL || *as == NULL)
		return ;
	i = 0;
	str = *as;
	while (str[i])
	{
		free(&str[i]);
		i++;
	}
	free(*as);
	*as = NULL;
}
