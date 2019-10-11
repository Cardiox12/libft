/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 19:45:15 by toto              #+#    #+#             */
/*   Updated: 2019/10/08 14:00:15 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	const size_t	limit = start + len;
	const size_t	total_size = limit - start;
	char 			*substr;
	char			*begin;

	substr = ft_strnew(total_size + 1);
	if (substr == NULL)
		return (NULL);
	begin = substr;
	while (start < limit)
		*substr++ = s[start++];
	return (begin);
}
