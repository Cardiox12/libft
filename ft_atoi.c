/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:46:14 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/22 15:32:58 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	return ((c == '\n' || c == '\t' || c == '\v' ||
				c == '\f' || c == '\r' || c == ' ') ? 1 : 0);
}

int		ft_atoi(const char *str)
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
