#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char		*source;
	char		*destination;

	if (dest == NULL)
		return NULL;
	if (src == NULL)
		return (dest);
	i = 0;
	source = (char*) src;
	destination = (char*) dest;
	while(i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
