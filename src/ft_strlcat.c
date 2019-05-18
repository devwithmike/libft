#include "../includes/libft.h"

size_t  ft_strlcat(char *dest, char const *src, size_t n)
{
        size_t        i;
    size_t        destlen;
    size_t        srclen;

    i = 0;
    destlen = ft_strlen(dest);
    srclen = ft_strlen(src);
    if (n <= destlen)
        return (srclen + n);
    while ((dest[i] != '\0') && i < (n - 1))
        i++;
    while (*src && i < (n - 1))
    {
        dest[i] = *src;
        i++;
        src++;
    }
    dest[i] = '\0';
    return (destlen + srclen);
}
