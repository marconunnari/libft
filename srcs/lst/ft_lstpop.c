#include "ft_list.h"

t_list			*ft_lstpop(t_list **lst)
{
	t_list	*current;
	t_list	*tmp;

	current = *lst;
	if (!current)
		return (NULL);
	if (!current->next)
	{
		*lst = NULL;
		return (current);
	}
	while (current->next->next)
		current = current->next;
	tmp = current->next;
	current->next = NULL;
	return (tmp);
}


