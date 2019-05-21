#include <stdio.h>
#include "../includes/libft.h"

int main () {
   char src[40];
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}

//  Final copied string : This is tutorialspoint.com
