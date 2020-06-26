/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_get_angle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 05:26:23 by bbellavi          #+#    #+#             */
/*   Updated: 2020/06/26 02:29:54 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

float	get_angle2(t_vec2 a, t_vec2 b)
{
	const float dot = dot_vec2(a, b);

	return (acos(dot / (mag_vec2(a) * mag_vec2(b))));
}
