/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:55:36 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/21 14:48:53 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*uchar_s = s;
	unsigned char		uchar_c;

	uchar_c = c;
	while (n-- > 0)
	{
		if (*uchar_s == uchar_c)
			return ((void*)uchar_s);
		uchar_s++;
	}
	return (NULL);
}
