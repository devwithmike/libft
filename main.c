#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	ft_putnbr(ft_pwr(ft_atoi(av[1]), ft_atoi(av[2])));
	return (0);
}
