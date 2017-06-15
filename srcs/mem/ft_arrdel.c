#include "libft.h"

void		ft_arrdel(void **arr)
{
	int		i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}
