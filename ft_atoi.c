/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 01:42:20 by toto              #+#    #+#             */
/*   Updated: 2019/08/18 01:47:01 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	return ((c == '\n' || c == '\t' || c == '\v' ||
				c == '\f' || c == '\r' || c == ' ') ? 1 : 0);
}

int		ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '+') ? sign : -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}
