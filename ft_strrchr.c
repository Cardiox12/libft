/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:52:59 by toto              #+#    #+#             */
/*   Updated: 2019/10/21 14:49:36 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *c_s;
	char *acc;
	char char_c;

	c_s = (char*)s;
	char_c = c;
	acc = NULL;
	while (*c_s)
	{
		if (*c_s == char_c)
			acc = c_s;
		c_s++;
	}
	if (*c_s == char_c)
		acc = c_s;
	return (acc);
}
