/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 01:31:57 by tony              #+#    #+#             */
/*   Updated: 2019/08/16 01:57:27 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char *uchar_src = src;
	unsigned char 		*tmp_dst;
	unsigned char 		*uchar_dst;
	size_t				index;

	tmp_dst = malloc(sizeof(char) * len);
	if (tmp_dst == NULL)
		return (NULL);
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
