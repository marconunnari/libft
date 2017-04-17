#include "libft.h"

static size_t		getsize(int n)
{
	int		size;

	size = 1;
	while (n /= 10)
		size++;
	return (size);
}

char				*ft_itoa(int n)
{
	char		*res;
	char		*sign;
	size_t		i;
	size_t		size;

	size = getsize(n);
	res = ft_strnew(size + 1);
	if (!res)
		return (NULL);
	sign = n < 0 ? "-" : "";
	if (n > 0)
		n = n * -1;
	i = 0;
	while (i < size)
	{
		res[i] = '0' + ((n % 10) * -1);
		n /= 10;
		i++;
	}
	res[i++] = *sign;
	res = ft_strrev(res);
	return (res);
}
