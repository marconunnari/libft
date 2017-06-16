#include "libft.h"

int			ft_isuintmax(char *str)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	if (i > 20)
		return (0);
	if (i == 20 && ft_strcmp(str,"18446744073709551615") > 0)
		return (0);
	return (1);
}
