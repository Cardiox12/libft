/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:11:25 by bbellavi          #+#    #+#             */
/*   Updated: 2019/11/03 17:17:23 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *begin;

	begin = dst;
	while (len--)
		*dst++ = (*src) ? *src++ : '\0';
	return (begin);
}

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	const size_t	src_len = ft_strlen(src);

	if (src_len + 1 < size)
		ft_strncpy(dest, src, src_len + 1);
	else if (size != 0)
	{
		ft_strncpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (src_len);
}
