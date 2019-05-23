#include <stdio.h>
#include <ctype.h>
#include "../includes/libft.h"

int main () {
   int var1 = 'h';
   int var2 = '2';
    
   if( ft_isdigit(var1) ) {
      printf("var1 = |%c| is a digit\n", var1 );
   } else {
      printf("var1 = |%c| is not a digit\n", var1 );
   }
   
   if( ft_isdigit(var2) ) {
      printf("var2 = |%c| is a digit\n", var2 );
   } else {
      printf("var2 = |%c| is not a digit\n", var2 );
   }
   
   return(0);
}

/*
*   var1 = |h| is not a digit
*   var2 = |2| is a digit
*/
