#include "libft.h"

char		*ft_strcpy(char *dest, const char *src)
{
	ft_memcpy(dest, src, strlen(src) + 1);
	return (dest);
}