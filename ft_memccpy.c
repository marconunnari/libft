#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*destination;
	char		*source;
	unsigned int	i;
	int		cfound;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	cfound = 0;
	destination = (char*) dest;
	source = (char*) src;
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
