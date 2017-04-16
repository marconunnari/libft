#include "libft.h"

char		*ft_strftrim(const char *s, int(*f)(int c))
{
	char	*res;
	int		i;
	int		j;

	res = ft_strnew(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (f(s[i]))
		i++;
	j = ft_strlen(s) - 1;
	while (f(s[j]))
		j--;
	while (j >= i)
	{
		res[j - i] = s[j];
		j--;
	}
	return (res);
}
