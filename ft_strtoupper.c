#include "libft.h"

char		*ft_strtoupper(char *str)
{
	int		i;

	IFRETURN(str == NULL, NULL);
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
