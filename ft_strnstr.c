#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	char		*rick;
	char		*res;
	size_t		i;
	int		j;

	rick = ft_strdup(big);
	if (little[0] == '\0')
		return (rick);
	res = NULL;
	i = 0;
	j = 0;
	while (rick[i] != '\0' && i < len)
	{
		if (rick[i] == little[j])
		{
			if (res == NULL)
				res = &rick[i];
			j++;
		}
		else
		{
			if (little[j] == '\0')
				return (res);
			res = NULL;
			j = 0;
		}
		i++;
	}
	if (little[j] != '\0')
		return (NULL);
	return (res);


}
