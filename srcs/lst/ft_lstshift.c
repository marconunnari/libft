#include "ft_list.h"

t_list			*ft_lstshift(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	if (!tmp)
		return (NULL);
	*lst = tmp->next;
	tmp->next = NULL;
	return (tmp);
}
