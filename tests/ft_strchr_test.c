#include <stdio.h>
#include "../includes/libft.h"

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

/*
*   String after |.| is - |.tutorialspoint.com|
*/
