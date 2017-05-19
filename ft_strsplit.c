/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:59:51 by mnunnari          #+#    #+#             */
/*   Updated: 2017/05/19 15:08:29 by mnunnari         ###   ########.fr       */
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

static void			loop(char *ptr1, char **res, char c)
{
	char		*ptr2;
	char		**resptr;

	ptr2 = ptr1;
	resptr = res;
	while (*ptr2)
	{
		if (*ptr2 == c)
		{
			*resptr++ = ft_strsub(ptr1, 0, ptr2 - ptr1);
			while (*ptr2 == c)
				ptr2++;
			ptr1 = ptr2;
		}
		ptr2++;
	}
	if (ptr2 > ptr1)
		*resptr++ = ft_strsub(ptr1, 0, ptr2 - ptr1);
	*resptr = 0;
}

char				**ft_strsplit(char const *s, char c)
{
	char		**res;
	char		*ptr1;

	if (!s)
		return (NULL);
	ptr1 = ft_strctrim(s, c);
	if (!ptr1)
			return (NULL);
	res = (char**)malloc(sizeof(char*) * words(ptr1, c) + 1);
	if (!res)
		return (NULL);
	loop(ptr1, res, c);
	return (res);
}
