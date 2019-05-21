#include <stdio.h>
#include "../includes/libft.h"

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}

/*
*   This is string.h library function
*   $$$$$$$ string.h library function
*/
