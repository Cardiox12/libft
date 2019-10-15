/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 19:45:15 by toto              #+#    #+#             */
/*   Updated: 2019/10/15 23:24:12 by elfamoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;

	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	sub[len] = '\0';
	return (ft_memcpy(sub, s + start, len));
}
