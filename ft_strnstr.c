/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 11:06:17 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/15 13:45:40 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*nbig;

	if (len < ft_strlen(big))
	{
		nbig = (char*)malloc(len + 1);
		nbig = ft_strncpy(nbig, big, len);
		nbig[len] = '\0';
		if ((nbig = ft_strstr(nbig, little)))
			return (ft_strstr(big, nbig));
		else
			return (NULL);
	}
	else
		return (ft_strstr(big, little));
}
