/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:25:24 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/28 16:25:26 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
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
				ft_lstclear(&begin, del);
				return (NULL);
			}
			ft_lstadd_back(&begin, tmp);
			lst = lst->next;
			if (lst != NULL)
				tmp = ft_lstnew(f(lst->content));
		}
		return (begin);
	}
	return (NULL);
}
