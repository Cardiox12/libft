/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:39:49 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/22 15:39:50 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*uchar_src = src;
	unsigned char		tmp_dst[len];
	unsigned char		*uchar_dst;
	size_t				index;

	uchar_dst = dst;
	index = 0;
	while (index < len)
	{
		tmp_dst[index] = uchar_src[index];
		index++;
	}
	index = 0;
	while (index < len)
	{
		uchar_dst[index] = tmp_dst[index];
		index++;
	}
	return (uchar_dst);
}
