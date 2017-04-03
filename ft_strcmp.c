#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (!(res = s1[i] - s2[i]) && s1[i])
		i++;
	return (res);
}
