/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uimaxtoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 18:09:58 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/29 18:10:08 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		getsize(unsigned long long n, int base)
{
	int		size;

	size = 1;
	while (n /= base)
		size++;
	return (size);
}

char				*ft_uimaxtoa_base(unsigned long long n, int base)
{
	char		*res;
	size_t		i;
	size_t		size;
	int			digit;

	size = getsize(n, base);
	res = ft_strnew(size + 1);
	IFRETURN(!res, NULL);
	i = 0;
	while (i < size)
	{
		digit = (n % base);
		if (digit < 10)
			res[i] = '0' + digit;
		else
			res[i] = 'a' + (digit % 10);
		n /= base;
		i++;
	}
	res = ft_strrev(res);
	REASSIGN(res, ft_strdup(res));
	return (res);
}
