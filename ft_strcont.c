#include "libft.h"

int		ft_strcont(char *str, char c)
{
	IFRETURN(!str, 0);
	while(*str)
	{
		if(*str == c)
			return (1);
		str++;
	}
	return (0);
}
