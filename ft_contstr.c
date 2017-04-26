#include "libft.h"

char		*ft_contstr(char **arr, const char *s)
{
	int		i;
	char	*strsub;

	i = 0;
	while (arr[i])
	{
		strsub = ft_strsub(s, 0, ft_strlen(arr[i]));
		if (ft_strequ(arr[i], strsub))
		{
			free(strsub);
			return (arr[i]);
		}
		free(strsub);
		i++;
	}
	return (NULL);
}
