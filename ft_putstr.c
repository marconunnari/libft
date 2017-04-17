/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:59:27 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/17 19:13:54 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		printchar(char *c)
{
	ft_putchar(*c);
}

void			ft_putstr(char const *s)
{
	ft_striter((char*)s, &printchar);
}
