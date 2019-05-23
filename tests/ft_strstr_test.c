#include <stdio.h>
#include "../includes/libft.h"

int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}

/*
*   The substring is: Point
*/
