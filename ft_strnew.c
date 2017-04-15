#include "libft.h"

char	*ft_strnew(size_t size)
{
	char				*str;
	unsigned int		i;

	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
		str[i++] = '\0';
	return (str);
}
