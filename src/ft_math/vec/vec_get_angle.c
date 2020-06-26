/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get_angle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 05:26:23 by bbellavi          #+#    #+#             */
/*   Updated: 2020/06/26 02:28:58 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

float	get_angle(t_vec a, t_vec b)
{
	const float dot = dot_vec(a, b);

	return (acos(dot / (mag_vec(a) * mag_vec(b))));
}
