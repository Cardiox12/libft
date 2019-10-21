/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:54:48 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/20 17:52:00 by elfamoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *begin;
	t_list *tmp;

	if (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		begin = tmp;
		while (lst)
		{
			if (tmp == NULL)
			{
				ft_lstiter(begin, del);
				return (NULL);
			}
			ft_lstadd_back(&new_list, tmp);
			lst = lst->next;
			tmp = ft_lstnew(f(lst->content));
		}
		return (new_list);
	}
	return (NULL);
}
