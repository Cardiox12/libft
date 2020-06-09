/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_update_ref.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 06:18:41 by bbellavi          #+#    #+#             */
/*   Updated: 2020/06/09 06:26:22 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/*
**	Garbage_update_ref
**
** Find old pointer into the garbage and update the node with new pointer.
*/

void	garbage_update_ref(void *pold, void *pnew)
{
	t_Ref_List *node;

	node = garbage_find_ref(pold);
	if (node != NULL)
		node->ref = pnew;
}
