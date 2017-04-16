#include "libft.h"

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i++;
		j--;
	}
	return (str);
}
