/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:18:15 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/27 16:18:16 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_contstr(char **arr, const char *s)
{
	int		i;
	char	*strsub;

	i = 0;
	while (arr[i])
	{
		strsub = ft_strsub(s, 0, ft_strlen(arr[i]));
		if (ft_strequ(arr[i], strsub))
		{
			free(strsub);
			return (arr[i]);
		}
		free(strsub);
		i++;
	}
	return (NULL);
}
