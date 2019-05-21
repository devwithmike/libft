#include <stdio.h>
#include "../includes/libft.h"

int main () {
   char str[50];
   int len;

   strcpy(str, "This is tutorialspoint.com");

   len = ft_strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);
   
   return(0);
}

/*
*   Length of |This is tutorialspoint.com| is |26|
*/
