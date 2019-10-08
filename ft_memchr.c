/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 01:58:16 by tony              #+#    #+#             */
/*   Updated: 2019/08/16 02:04:17 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *uchar_s = s;
	unsigned char uchar_c;

	uchar_c = c;
	while (n-- > 0)
	{
		if (*uchar_s == uchar_c)
			return ((void*)uchar_s);
		uchar_s++;
	}
	return (NULL);
}
