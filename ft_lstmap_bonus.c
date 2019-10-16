/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:54:48 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/16 14:39:55 by elfamoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *new_list;
	t_list *tmp;

	if (lst != NULL)
	{
		while (lst)
		{
			tmp = ft_lstnew(f(lst->content));
			if (tmp == NULL)
				return (NULL);
			ft_lstadd_back(&new_list, tmp);
			lst = lst->next;
		}
		return (new_list);
	}
	return (NULL);
}
