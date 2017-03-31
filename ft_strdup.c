#include "libft.h"

char		*ft_strdup(const char *s)
{
	size_t		len;
	char		*dup;

	len = ft_strlen(s);
	dup = (char*) malloc(len + 1);
	ft_memcpy(dup, s, len + 1);
	return (dup);
}
