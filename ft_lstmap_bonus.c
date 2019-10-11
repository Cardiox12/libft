/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:54:48 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/11 14:13:57 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *new_list;

	if (lst != NULL)
	{
		new_list = f(lst->content);
		if (new_list == NULL)
			return (NULL);
		new_list->next = ft_lstmap(lst->content, f);
		return (new_list);
	}
	return (NULL);
}
