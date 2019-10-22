/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:36:42 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/22 15:36:46 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	const size_t	size = ft_strlen(s);
	size_t			index;
	char			*mapped;

	mapped = malloc(sizeof(char) * (size + 1));
	if (mapped == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		mapped[index] = f(index, s[index]);
		index++;
	}
	mapped[index] = '\0';
	return (mapped);
}
