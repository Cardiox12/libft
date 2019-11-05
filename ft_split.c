/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:39:01 by bbellavi          #+#    #+#             */
/*   Updated: 2019/11/03 17:03:08 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_substr(const char *s, char c)
{
	size_t counter;

	counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (counter);
}

static size_t	ft_strlen_to_sep(const char *s, char c)
{
	const char *final_s = s;

	while (*s && *s != c)
		s++;
	return (s - final_s);
}

static void		free_strings_array(char **strings, size_t size)
{
	size_t index;

	index = 0;
	while (index < size)
		free(strings[index++]);
	*strings = NULL;
}

static char		*ft_strndup(const char *s, size_t len)
{
	char *string;
	char *begin;

	string = malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	begin = string;
	while (len-- != 0 && *s)
		*string++ = *s++;
	*string = '\0';
	return (begin);
}

char			**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	index;

	index = 0;
	if ((strings = malloc(sizeof(char*) * (ft_count_substr(s, c) + 1))) == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			strings[index] = ft_strndup(s, ft_strlen_to_sep(s, c));
			if (strings[index] == NULL)
			{
				free_strings_array(strings, index);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
			index++;
		}
		else
			s++;
	}
	strings[index] = NULL;
	return (strings);
}
