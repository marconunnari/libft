/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 11:06:17 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/15 11:06:17 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	char		*rick;
	char		*res;
	int		i;
	int		j;

	rick = ft_strdup(haystack);
	if (needle[0] == '\0')
		return (rick);
	res = NULL;
	i = 0;
	j = 0;
	while (rick[i] != '\0')
	{
		if (rick[i] == needle[j])
		{
			if (res == NULL)
				res = &rick[i];
			j++;
		}
		else
		{
			if (needle[j] == '\0')
				return (res);
			res = NULL;
			j = 0;
		}
		i++;
	}
	if (needle[j] != '\0')
		return (NULL);
	return (res);
}
