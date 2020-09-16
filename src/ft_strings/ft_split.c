/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:39:01 by bbellavi          #+#    #+#             */
/*   Updated: 2020/09/17 00:08:05 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_objects.h"
#include "ft_strings.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}

char	*ft_strndup(const char *s, size_t n)
{
	const size_t	len = strlen(s);
	char					*dup;

	if (n >= len)
		n = len;
	dup = malloc(sizeof(char) * (n + 1));
	if (dup == NULL)
		return (NULL);
	return (ft_strncpy(dup, s, n));
}

t_string_list	*ft_split(char const *s, char c)
{
	t_string_list	*list;
	char			*found;

	list = NULL;
	string_list_create(&list);
	while (*s)
	{
		if ((found = ft_strchr(s, c)) != NULL)
		{
			printf("found : %s\n", ft_strdup())
		}
		s++;
	}
	return (NULL);
}