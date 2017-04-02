#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		destlen;
	size_t		srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (!(size > destlen))
		return (size + srclen);
	i = 0;
	while(src[i] != '\0' && ((destlen + i) < (size - 1)))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
