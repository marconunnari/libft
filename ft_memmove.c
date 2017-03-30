#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	unsigned char	*buffer;
	unsigned int	i;

	destination = (unsigned char*) dest;
	source = (unsigned char*) src;
	buffer = (unsigned char*) malloc(n);
	i = 0;
	while(i < n)
	{
		buffer[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		destination[i] = buffer[i];
		i++;
	}
	return (dest);
}
