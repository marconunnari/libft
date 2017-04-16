#include "libft.h"

char		*ft_strcmpr(const char *s, char c)
{
	char	*res;
	char	*resptr;

	res = ft_strnew(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	resptr = res;
	while (*s)
	{
		if (*s == c)
		{
			*resptr++ = c;
			while (*s == c)
				s++;
		}
		*resptr++ = *s;
		s++;
	}
	return (res);
}
