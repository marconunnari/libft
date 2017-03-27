#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while(ptr[i] && i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
