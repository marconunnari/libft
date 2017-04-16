#include "libft.h"

char		*ft_strsub(char const *s,unsigned int start, size_t len)
{
	char				*res;
	unsigned int		i;

	res = (char*)malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	return (res);
}
