/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:51:10 by tony              #+#    #+#             */
/*   Updated: 2019/10/21 14:49:34 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*to_find = needle;
	char		*begin;

	if (*needle == '\0' || len == 0)
		return ((*needle == '\0') ? (char*)haystack : NULL);
	while (*haystack && len-- > 0)
	{
		begin = (char*)haystack;
		if (*haystack == *needle)
		{
			while (*haystack == *needle && *haystack && *needle && len != 0)
			{
				needle++;
				haystack++;
				len--;
			}
			if (*needle == '\0')
				return (begin);
		}
		else
			haystack++;
		needle = (char*)to_find;
	}
	return (NULL);
}
