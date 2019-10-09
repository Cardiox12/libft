/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:55:22 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/08 13:55:24 by bbellavi         ###   ########.fr       */
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
