#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char		*str;
	size_t		i;

	str = ft_strdup(s);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	else
		return NULL;
}
