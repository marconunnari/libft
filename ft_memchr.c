#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		chr;
	unsigned int			i;

	str = (unsigned char *) s;
	chr = (unsigned char) c;
	i = 0;
	while (i < n && str[i] != chr)
		i++;
	if (i != n)
		return (&str[i]);
	else
		return (NULL);
}
