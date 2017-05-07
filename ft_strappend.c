/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:18:21 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/27 16:18:22 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char *str, char c)
{
	char	*new;
	int	len;

	len = ft_strlen(str);
	new = ft_strnew(len + 2);
	IFNOTRETURN(new, NULL);
	new[len + 1] = c;
	ft_strdel(&str);
	return (new);
}
