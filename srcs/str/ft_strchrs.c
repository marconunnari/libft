#include "libft.h"

char		*ft_strchrs(const char *s, int (*f)(char))
{
	size_t		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (f(s[i]))
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
