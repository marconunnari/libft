#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*res;
	int		i;
	int		j;

	res = ft_strnew(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	while (j >= i)
	{
		res[j - i] = s[j];
		j--;
	}
	return (res);
}
