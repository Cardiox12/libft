/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 23:54:23 by tony              #+#    #+#             */
/*   Updated: 2019/10/08 13:56:41 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*begin;
	unsigned char	*s_b;
	char			uchar_c;

	uchar_c = c;
	s_b = b;
	begin = s_b;
	while (len-- > 0)
		*s_b++ = uchar_c;
	return (begin);
}
