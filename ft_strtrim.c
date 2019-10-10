/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:40:52 by tony              #+#    #+#             */
/*                                                        :::      ::::::::   */
/*   Updated: 2019/10/10 14:43:08 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_left_limit(const char *s, const char *set)
{
	const char *final_str = s;

	while (*s && ft_isset(*s, set))
		s++;
	return (s - final_str);
}

static size_t	ft_get_right_limit(const char *s, const char *set)
{
	size_t limit;

	limit = ft_strlen(s);
	while (limit != 0 && ft_isset(s[limit - 1], set))
		limit--;
	return (limit);
}

static int	ft_strlen_trim(char const *s, const char *set)
{
	if (ft_strisset(s, set))
		return (0);	
	return (ft_get_right_limit(s, set) - ft_get_left_limit(s, set));
}

char		*ft_strtrim(char const *s, char const *set)
{
	char	*trim;
	char	*begin;
	size_t	index;
	size_t 	limit;

	trim = ft_strnew(ft_strlen_trim(s, set) + 1);
	if (trim == NULL)
		return (NULL);
	index = ft_get_left_limit(s, set);
	limit = ft_get_right_limit(s, set);
	begin = trim;
	while (index < limit)
	{
		*trim++ = s[index];
		index++;
	}
	return (begin);
}
