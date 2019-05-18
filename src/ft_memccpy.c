#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
	*((char *)dest + i) = *((char *)src + i);
	i++;
	if (*((char *)src + i) == c)
	{
	    *((char *)dest + i) = *((char *)src + i);
	    break;
	}
    }
}
