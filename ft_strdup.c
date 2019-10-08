/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 02:19:09 by tony              #+#    #+#             */
/*   Updated: 2019/08/16 02:26:00 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *duplicate;
	char *begin;

	duplicate = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (duplicate == NULL)
		return (NULL);
	begin = duplicate;
	while (*s1 != '\0')
		*duplicate++ = *s1++;
	*duplicate = '\0';
	return (begin);
}
