/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 00:50:11 by tony              #+#    #+#             */
/*   Updated: 2019/10/21 14:55:54 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*uchar_src = src;
	unsigned char		*begin;
	unsigned char		*uchar_dst;

	uchar_dst = dst;
	begin = uchar_dst;
	while (n-- > 0)
		*uchar_dst++ = *uchar_src++;
	return (begin);
}
