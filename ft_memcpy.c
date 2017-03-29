#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char		*source;
	char		*destination;

	i = 0;
	source = (char*) src;
	destination = (char*) dest;
	while(source[i] && i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
