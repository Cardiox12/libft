/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_free_all.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 05:24:40 by bbellavi          #+#    #+#             */
/*   Updated: 2020/06/09 05:28:24 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

void	garbage_free_all(void)
{
	t_Ref_List *cur;
	t_Ref_List *old;

	if (g_garbage.refs != NULL)
	{
		cur = g_garbage.refs;
		while (cur != NULL)
		{
			old = cur;
			cur = cur->next;
			free(old->ref);
			free(old);
		}
	}
}
