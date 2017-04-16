#include "libft.h"

char			*ft_strctrim(const char *s, int c)
{
	char	*res;
	int		i;
	int		j;

	res = ft_strnew(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] == c)
		i++;
	j = ft_strlen(s) - 1;
	while (s[j] == c)
		j--;
	while (j >= i)
	{
		res[j - i] = s[j];
		j--;
	}
	return (res);
}
