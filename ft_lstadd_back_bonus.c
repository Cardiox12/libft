#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *current;

	if (*alst != NULL)
	{
		current = *alst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else
		*alst = new;
}
