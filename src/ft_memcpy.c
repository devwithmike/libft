#include "../includes/libft.h"

void *ft_memcpy(void *str1, const void *str2, size_t n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        *((char *)str1 + i) = *((char *)str2 + i);
        i++;
    }
    return (0);
}
