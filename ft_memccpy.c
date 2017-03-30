#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	unsigned int	i;
	int		cfound;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	cfound = 0;
	destination = (unsigned char*) dest;
	source = (unsigned char*) src;
	while (i < n && !cfound)
	{
		if (source[i] == c)
			cfound = 1;
		destination[i] = source[i];
		i++;
	}
	if (cfound)
		return (&destination[i]);
	else
		return (NULL);
}
