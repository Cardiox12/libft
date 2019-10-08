/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 02:05:05 by tony              #+#    #+#             */
/*   Updated: 2019/08/16 02:17:16 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *uchar_s1 = s1;
	const unsigned char *uchar_s2 = s2;
	int					index;

	index = 0;
	while (n-- > 0)
	{
		if (uchar_s1[index] != uchar_s2[index])
			return (uchar_s1[index] - uchar_s2[index]);
		index++;
	}
	index--;
	return (uchar_s1[index] - uchar_s2[index]);
}
