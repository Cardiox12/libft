/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:30:10 by tony              #+#    #+#             */
/*   Updated: 2019/08/18 00:44:42 by toto             ###   ########.fr       */
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