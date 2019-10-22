/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:37:19 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/22 15:37:21 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *s, size_t maxlen)
{
	const char *final_s = s;

	while (maxlen-- != 0 && *s)
		s++;
	return (s - final_s);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t src_len;
	size_t size;
	size_t size_to_cpy;

	size = ft_strnlen(dst, dstsize);
	src_len = ft_strlen(src);
	if (size != dstsize)
	{
		size_to_cpy = dstsize - size - 1;
		if (size_to_cpy > src_len)
			size_to_cpy = src_len;
		ft_memcpy(dst + size, src, size_to_cpy);
		dst[size + size_to_cpy] = '\0';
	}
	return (size + src_len);
}
