#include "libft.h"

char		*ft_strtrim(char const *s)
{
	return (ft_strftrim(s, &ft_iswhitespace));
}
