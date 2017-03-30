#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;
	int		res;

	i = 0;
	str1 = (unsigned char*) s1;
	str2 = (unsigned char*) s2;
	while (i < n && !(res = str1[i] - str2[i]))
		i++;
	return (res);
}
