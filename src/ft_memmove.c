#include "../includes/libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
    char    *dest2;

    dest2 = (char*)malloc(sizeof(char) * n + 1);
    dest2[n + 1] = '\0';
    memcpy(dest2, src, n);
    memcpy(dest, dest2, n);
    free(dest2);
    return (dest);
}
