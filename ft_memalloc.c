#include "libft.h"

void			*ft_memalloc(size_t size)
{
	unsigned char		*mem;
	unsigned int		i;

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		mem[i++] = '\0';
	return ((void*)mem);
}
