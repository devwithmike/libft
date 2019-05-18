#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchar(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

//String after |.| is - |.com|
