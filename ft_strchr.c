/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:44:06 by toto              #+#    #+#             */
/*   Updated: 2019/10/21 14:49:22 by bbellavi         ###   ########.fr       */
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
