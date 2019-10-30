/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:25:24 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/30 17:35:27 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *first;
    t_list    *list;

    if (!lst || !f)
        return (NULL);
    first = NULL;
    while (lst != NULL)
    {
        if ((list = ft_lstnew(f(lst->content))) == NULL)
        {
            ft_lstclear(&first, del);
            return (NULL);
        }
        ft_lstadd_back(&first, list);
        lst = lst->next;
    }
    return (first);
}