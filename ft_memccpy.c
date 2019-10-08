/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 00:57:10 by tony              #+#    #+#             */
/*   Updated: 2019/08/16 01:27:54 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char *uchar_src = src;
	unsigned char		*uchar_dst;
	unsigned char		uchar_c;

	uchar_dst = dst;
	uchar_c = c;
	while (n-- > 0)
	{
		if (uchar_c == *uchar_src)
		{
			*uchar_dst++ = *uchar_src;
			return (uchar_dst);
		}
		*uchar_dst++ = *uchar_src++;
	}
	return (NULL);
}
