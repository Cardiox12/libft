/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 00:50:11 by tony              #+#    #+#             */
/*   Updated: 2019/08/16 00:54:09 by tony             ###   ########.fr       */
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
