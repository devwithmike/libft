#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
    const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char	*ptr;

	ptr = strnstr(largestring, smallstring, 11);
    printf("%s", ptr);
}

/*
len = 11
output: Bar Baz


len = 4
output: (null)
*/
