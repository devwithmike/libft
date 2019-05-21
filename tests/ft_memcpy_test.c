#include <stdio.h>
#include "../includes/libft.h"

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}

/*
*   Before memcpy dest = Heloooo!!
*   After memcpy dest = http://www.tutorialspoint.com
*/
