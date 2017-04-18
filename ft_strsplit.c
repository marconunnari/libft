/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:59:51 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/18 17:54:48 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		words(const char *s, char c)
{
	size_t		words;

	words = 1;
	while (*s)
		if (*s++ == c)
			words = words + 1;
	return (words);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**res;
	char		**resptr;
	char		*ptr1;
	char		*ptr2;

	ptr1 = ft_strctrim(s, c);
	ptr1 = ft_strcmpr(ptr1, c);
	ptr2 = ptr1;
	res = (char**)malloc(sizeof(char*) * words(ptr1, c) + 1);
	if (!res)
		return (NULL);
	resptr = res;
	while (*ptr2)
	{
		if (*ptr2 == c)
		{
			*resptr++ = ft_strsub(ptr1, 0, ptr2 - ptr1);
			ptr1 = ptr2 + 1;
		}
		ptr2++;
	}
	if (ptr2 > ptr1)
		*resptr++ = ft_strsub(ptr1, 0, ptr2 - ptr1);
	*resptr = 0;
	return (res);
}
