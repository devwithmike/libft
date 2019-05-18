#include "../includes/libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        *((char *)str + i) = c;
        i++;
    }
}
