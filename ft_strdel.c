#include "libft.h"

void		ft_strdel(char**as)
{
	char	*str;
	int		i;

	if (*as == NULL)
		return ;
	i = 0;
	str = *as;
	while (str[i])
	{
		free(&str[i]);
		i++;
	}
	free(*as);
	*as = NULL;
}
