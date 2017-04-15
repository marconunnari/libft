/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 11:06:15 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/15 11:36:38 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buffer;

	buffer = (unsigned char*)malloc(n);
	ft_memcpy(buffer, src, n);
	ft_memcpy(dest, buffer, n);
	free(buffer);
	return (dest);
}
