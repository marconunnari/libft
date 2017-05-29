/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:35:16 by mnunnari          #+#    #+#             */
/*   Updated: 2017/05/29 14:35:18 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONV_H
# define FT_CONV_H

int					ft_atoi(const char *nptr);
char				*ft_itoa(int n);
char				*ft_imaxtoa(intmax_t n);
char				*ft_imaxtoa_sign(intmax_t n, char *sign);
char				*ft_uimaxtoa_base(uintmax_t n, int base);
#endif
