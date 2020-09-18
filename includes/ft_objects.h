/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_objects.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 08:01:05 by bbellavi          #+#    #+#             */
/*   Updated: 2020/09/18 11:20:33 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OBJECTS_H
# define FT_OBJECTS_H

# include <stdlib.h>

# ifdef DEBUG
	# include <stdio.h>
# endif

# define GROWTH_FACTOR 2

typedef struct	s_string_list
{
	int			length;
	char		**items;
}				t_string_list;

# define NO_ERROR 0

enum	objects_errors
{
	ERR_MEM_ALLOC_FAILED = 1,
	ERR_NEG_INDEX = 2,
	ERR_INDEX_OUT_OF_RANGE = 3
};

void	string_list_create(t_string_list **str_list);
int		string_list_insert(t_string_list *items, int index, const char *item);
int		string_list_append(t_string_list *items, const char *item);
int		string_list_pop(t_string_list *items, int index);
int		string_list_pop_last(t_string_list *list);
void	string_list_iter(t_string_list *list, int (*f)(const char*));
void	string_list_delete(t_string_list *list);

#endif
