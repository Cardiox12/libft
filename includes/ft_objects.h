/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_objects.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 08:01:05 by bbellavi          #+#    #+#             */
/*   Updated: 2020/06/13 08:46:28 by bbellavi         ###   ########.fr       */
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
	int			capacity;
	int			length;
	char		**items;
}				t_string_list;

void	string_list_create(t_string_list **str_list);

#endif
