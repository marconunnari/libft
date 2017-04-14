#include "libft.h"

static void	get_sign(const char *str, int *i, int *sign)
{
	if (str[*i] == '-')
	{
		*sign = -1;
		*i += 1;
	}
	else if (str[*i] == '+')
	{
		*sign = +1;
		*i += 1;
	}
}

int		ft_atoi(const char *nptr)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
			|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	get_sign(nptr, &i, &sign);
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			return (res * sign);
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
