#include "libft.h"

char		*ft_strmap(char const *s,char(*f)(char))
{
	char			*res;
	unsigned int	i;

	if (!s)
		return (NULL);
	res = (char*)malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
