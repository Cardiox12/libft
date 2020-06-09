/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 09:51:34 by tony              #+#    #+#             */
/*   Updated: 2020/06/09 05:29:52 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

#include <stddef.h>
#include <stdlib.h>

typedef struct 			s_Ref_List
{
	void 				*ref;
	struct 	s_Ref_List 	*next;
}						t_Ref_List;

typedef struct 	s_Garbage 
{
	int			length;
	t_Ref_List	*refs;
}				t_Garbage;

static t_Garbage g_garbage = (t_Garbage){0, NULL};

int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_itoa(int n);

t_Ref_List	*garbage_add_ref(void *p);
void 		garbage_free(void *p);
void		garbage_free_all(void);
void		*malloc_wrapper(size_t size);

#endif