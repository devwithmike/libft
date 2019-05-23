#include <stdio.h>
#include "../includes/libft.h"

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}

/*
Before memmove dest = oldstring, src = newstring
After memmove dest = newstring, src = newstring
*/
