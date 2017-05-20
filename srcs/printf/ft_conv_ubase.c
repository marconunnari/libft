/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_uox.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 20:04:11 by mnunnari          #+#    #+#             */
/*   Updated: 2017/05/19 14:58:12 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uintmax_t			getuintarg(t_placeholder *ph, va_list ap)
{
	if (ft_strequ(ph->length, "l") || ph->type == 'U'
			|| ph->type == 'O')
		return (va_arg(ap, unsigned long));
	if (ft_strequ(ph->length, "hh"))
		return ((unsigned char)va_arg(ap, int));
	if (ft_strequ(ph->length, "h"))
		return ((unsigned short)va_arg(ap, int));
	if (ft_strequ(ph->length, "ll"))
		return (va_arg(ap, unsigned long long));
	if (ft_strequ(ph->length, "j") || ph->type == 'p')
		return (va_arg(ap, uintmax_t));
	if (ft_strequ(ph->length, "z"))
		return (va_arg(ap, size_t));
	return (va_arg(ap, unsigned int));
}

static void			widthflag(t_placeholder *ph, uintmax_t u)
{
	if (u == 0 && !(ph->type == 'p'))
		return ;
	if (!(ft_strcont(ph->flags, '#') || ph->type == 'p'))
		return ;
	if (ft_tolower(ph->type) == 'o')
		ph->width--;
	else if (ft_tolower(ph->type) == 'x' || ph->type == 'p')
		ph->width -= 2;
}

static void			flag(t_placeholder *ph, uintmax_t u, char **str)
{
	char	*old;

	if (u == 0 && !(ph->type == 'p'))
		return ;
	if (!(ft_strcont(ph->flags, '#') || ph->type == 'p'))
		return ;
	if (ft_tolower(ph->type) == 'o')
		*str = ft_strprepend('0', *str);
	else if (ft_tolower(ph->type) == 'x' || ph->type == 'p')
	{
		old = *str;
		*str = ft_strjoin("0x", *str);
		free(old);
	}
}

void				conv_ubase(t_placeholder *ph, va_list ap, int base)
{
	uintmax_t		u;
	char			*str;

	u = getuintarg(ph, ap);
	str = ft_uimaxtoa_base(u, base);
	if (ft_strcont(ph->flags, '0'))
	{
		widthflag(ph, u);
		numprec(ph, &str, u == 0);
		width(ph, &str);
		flag(ph, u, &str);
	}
	else
	{
		numprec(ph, &str, u == 0);
		flag(ph, u, &str);
		width(ph, &str);
	}
	if (ft_isupper(ph->type))
		ft_strtoupper(str);
	ft_printf_putstr(str);
	ft_strdel(&str);
}
