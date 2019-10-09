/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:00:05 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/08 14:00:07 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*to_find = needle;
	char		*begin;

	if (*needle == '\0')
		return ((*needle == '\0') ? (char*)haystack : NULL);
	while (*haystack)
	{
		begin = (char*)haystack;
		if (*haystack == *needle)
		{
			while (*haystack == *needle && *haystack && *needle)
			{
				needle++;
				haystack++;
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