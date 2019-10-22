/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:39:44 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/22 15:39:45 by bbellavi         ###   ########.fr       */
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
