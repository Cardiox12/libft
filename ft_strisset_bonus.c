/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:01:45 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/10 15:16:32 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisset(const char *str, const char *set)
{
	while (*str)
	{
		if (!ft_isset(*str, set))
			return (0);
		str++;
	}
	return (1);
}
