#include "ft_list.h"

void		ft_lstpushnew(t_list **alst, void *content, size_t content_size)
{
	t_list	*new;

	new = ft_lstnew(content, content_size);
	ft_lstpush(alst, new);
}
