/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:37:04 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/21 14:48:44 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return ((c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r' ||
				c == ' ') ? 1 : 0);
}
