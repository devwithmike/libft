#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../includes/libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n);

/*
*   Place ft_memccpy here
*/

char* msg = "This is the string: not copied";

int main(void)
{
    char buffer[80];

    memset(buffer, '\0', 80);
    ft_memccpy(buffer, msg, ':', 80);

    printf("%s\n", buffer);

    return EXIT_SUCCESS;
}

/*
*   Output: This is the string:
*/
