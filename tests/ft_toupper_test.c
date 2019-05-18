#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char c;
   char str[] = "tutorials point";
	
   while( str[i] ) {
      putchar(ft_toupper(str[i]));
      i++;
   }
   
   return(0);
}

//  TUTORIALS POINT