/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:40:52 by tony              #+#    #+#             */
/*   Updated: 2019/08/21 18:19:56 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return ((c == '\n' || c == '\t' || c == '\v' ||
				c == '\f' || c == '\r' || c == ' ') ? 1 : 0);
}

static int	ft_str_isspace(char const *s)
{
	while (*s)
	{
		if (!ft_isspace(*s))
			return (0);
		s++;
	}
	return (1);
}

static size_t	ft_get_left_limit(const char *s)
{
	const char *final_str = s;

	while (*s && ft_isspace(*s))
		s++;
	return (s - final_str);
}

static size_t	ft_get_right_limit(const char *s)
{
	size_t limit;

	limit = ft_strlen(s);
	while (limit != 0 && ft_isspace(s[limit - 1]))
		limit--;
	return (limit);
}

static int	ft_strlen_trim(char const *s)
{
	if (ft_str_isspace(s))
		return (0);
	return (ft_get_right_limit(s) - ft_get_left_limit(s));
}

char		*ft_strtrim(char const *s)
{
	char	*trim;
	char	*begin;
	size_t	index;
	size_t 	limit;

	trim = ft_strnew(ft_strlen_trim(s) + 1);
	if (trim == NULL)
		return (NULL);
	index = ft_get_left_limit(s);
	limit = ft_get_right_limit(s);
	begin = trim;
	while (index < limit)
	{
		*trim++ = s[index];
		index++;
	}
	return (begin);
}
