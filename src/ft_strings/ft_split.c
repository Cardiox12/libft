/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:39:01 by bbellavi          #+#    #+#             */
/*   Updated: 2020/09/16 23:45:42 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_objects.h"
#include "ft_strings.h"

t_string_list	*ft_split(char const *s, char c)
{
	t_string_list *list;

	list = NULL;
	string_list_create(&list);
	while (*s)
	{
		if (ft_strchr(s, c) != NULL)
		{
			printf()
		}
		s++;
	}
	return (NULL);
}