#include "libft.h"

char		*ft_strtolower(char *str)
{
	int		i;

	IFRETURN(str == NULL, NULL);
	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}
