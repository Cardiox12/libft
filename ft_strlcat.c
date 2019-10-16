/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:37:25 by tony              #+#    #+#             */
/*   Updated: 2019/10/16 17:46:26 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_SIZE 8

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t size;

	size = dstsize - strlen(dst);
	if (size == 0)
		return (strlen(dst) + strlen(src));
	while (size <= dstsize)
	{
		dst[size] = *src++;
		size++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		char dst[BUFF_SIZE] = "toto";

		printf("Original ft_strlen : %lu\n", ft_strlcat(dst, argv[1], BUFF_SIZE));
		printf("Original strlen : %lu\n", ft_strlcat(dst, argv[1], BUFF_SIZE));
	}
}
