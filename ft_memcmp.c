/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:55:54 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/08 13:55:57 by bbellavi         ###   ########.fr       */
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
