#include "../includes/libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        *((char *)s + i) = 0;
        i++;
    }
}
