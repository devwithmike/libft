#include <stdio.h>
#include "../includes/libft.h"

int main () {
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   ft_strncat(dest, src, 15);

   printf("Final destination string : |%s|", dest);
   
   return(0);
}

/*
*   Final destination string : |This is destinationThis is source|
*/
