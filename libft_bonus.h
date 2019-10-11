/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:17:42 by bbellavi          #+#    #+#             */
/*   Updated: 2019/10/11 12:25:15 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef LIBFT_BONUS_H
#	define  LIBFT_BONUS_H

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isset(int c, const char *set);
int		ft_isspace(int c);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
void 	ft_lstclear(t_list **lst, void (*del)(void*));
void 	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void*));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
int		ft_strisset(const char *str, const char *set);
char	*ft_strnew(size_t size);

#	endif
