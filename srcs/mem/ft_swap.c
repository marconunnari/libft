#include "libft.h"

void			ft_swap(void **array, int i, int j)
{
	void	*tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}
