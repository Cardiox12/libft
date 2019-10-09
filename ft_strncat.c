/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:23:17 by tony              #+#    #+#             */
/*   Updated: 2019/10/08 13:59:02 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	const size_t	s1_len = ft_strlen(s1);
	size_t			index;

	index = 0;
	while (s2[index] != '\0' && n-- > 0)
	{
		s1[s1_len + index] = s2[index];
		index++;
	}
	s1[s1_len + index] = '\0';
	return (s1);
}
