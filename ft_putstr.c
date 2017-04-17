#include "libft.h"

static void printchar(char *c)
{
	ft_putchar(*c);
}

void		ft_putstr(char const *s)
{
	ft_striter((char*)s, &printchar);
}
