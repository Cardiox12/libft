/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:38:54 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/22 15:38:55 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char char_c;

	char_c = c;
	while (*s)
	{
		if (*s == char_c)
			return ((char*)s);
		s++;
	}
	return ((*s == char_c) ? (char*)s : NULL);
}
