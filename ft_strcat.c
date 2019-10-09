/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 02:43:16 by tony              #+#    #+#             */
/*   Updated: 2019/10/08 13:57:37 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	const int dest_len = ft_strlen(dest);
	const int src_len = ft_strlen(src);

	ft_strcpy(dest + dest_len, src);
	dest[dest_len + src_len] = '\0';
	return (dest);
}
