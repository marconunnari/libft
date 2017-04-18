#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*node;
	t_list		*res;

	node = f(lst);
	res = node;
	while(lst->next)
	{
		lst = lst->next;
		node->next = f(lst);
		node = node->next;
	}
	return (res);
}
