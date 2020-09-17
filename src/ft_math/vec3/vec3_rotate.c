/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 14:53:31 by bbellavi          #+#    #+#             */
/*   Updated: 2020/07/02 19:27:44 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
**	Rotate 2d vector by theta angle.
**
**	IMPORTANT : The angle is in radians.
*/

t_vec3	rotate(t_vec3 u, double theta, char clockwise)
{
	t_vec3 v;

	if (clockwise == CLOCKWISE)
	{
		v.x = cos(theta) * u.x - sin(theta) * u.y;
		v.y = sin(theta) * u.x + cos(theta) * u.y;
	}
	else
	{
		v.x = cos(theta) * u.x + sin(theta) * u.y;
		v.y = -sin(theta) * u.x + cos(theta) * u.y;
	}
	return (v);
}
