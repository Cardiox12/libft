/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 19:27:03 by toto              #+#    #+#             */
/*   Updated: 2019/08/18 19:31:24 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	const size_t	size = ft_strlen(s);
	size_t			index;
	char			*mapped;

	mapped = ft_strnew(size + 1);
	if (mapped == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		mapped[index] = f(index, s[index]);
		index++;
	}
	return (mapped);
}
