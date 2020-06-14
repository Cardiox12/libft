/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringList_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 08:22:13 by bbellavi          #+#    #+#             */
/*   Updated: 2020/06/14 04:03:49 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_objects.h"
#include "ft_strings.h"

void	string_list_create(t_string_list **str_list)
{
	t_string_list *new;

	if ((new = malloc(sizeof(t_string_list))) == NULL)
	{
		*str_list = NULL;
		return ;
	}
	new->length = 0;
	new->capacity = GROWTH_FACTOR;
	new->items = malloc(sizeof(char*) * new->capacity);
	if (new->items == NULL)
	{
		free(new);
		*str_list = NULL;
		return ;
	}
	ft_bzero(new->items, sizeof(char*) * new->capacity);
	*str_list = new;
}