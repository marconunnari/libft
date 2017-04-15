/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 11:06:15 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/15 11:06:15 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	unsigned char	*buffer;
	unsigned int	i;

	destination = (unsigned char*) dest;
	source = (unsigned char*) src;
	buffer = (unsigned char*) malloc(n);
	i = 0;
	while(i < n)
	{
		buffer[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		destination[i] = buffer[i];
		i++;
	}
	free(buffer);
	return (dest);
}
