/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 19:15:43 by toto              #+#    #+#             */
/*   Updated: 2019/08/18 19:23:28 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *mapped;
	char *begin;

	mapped = ft_strnew(ft_strlen(s) + 1);
	if (mapped == NULL)
		return (NULL);
	begin = mapped;
	while (*s)
		*mapped++ = f(*s++);
	return (begin);
}
