#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	ft_putnbr(ft_sqrt(ft_atoi(av[1])));
	return (0);
}
