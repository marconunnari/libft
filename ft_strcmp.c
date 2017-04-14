#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (!(res = (unsigned char)s1[i] - (unsigned char)s2[i]) && s1[i])
		i++;
	return (res);
}
