/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:59:51 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/19 12:24:57 by mnunnari         ###   ########.fr       */
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

static char			*normalize(char *ptr1, const char *s, char c)
{
	IFRETURN(!s, NULL);
	ptr1 = ft_strctrim(s, c);
	IFRETURN(!ptr1, NULL);
	ptr1 = ft_strcmpr(ptr1, c);
	IFRETURN(!ptr1, NULL);
	return (ptr1);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**res;
	char		**resptr;
	char		*ptr1;
	char		*ptr2;

	ptr1 = NULL;
	ptr1 = normalize(ptr1, s, c);
	IFRETURN(!ptr1, NULL);
	ptr2 = ptr1;
	res = (char**)malloc(sizeof(char*) * words(ptr1, c) + 1);
	IFRETURN(!res, NULL);
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
