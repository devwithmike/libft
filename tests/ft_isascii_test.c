#include <stdio.h>
#include <ctype.h>
#include "../includes/libft.h"
 
int main(void)
{
   int ch;
 
   for (ch = 0x7a; ch <= 0x82; ch++) {
      printf("%#04x    ", ch);
      if (ft_isascii(ch))
         printf("The character is %c\n", ch);
      else
         printf("Cannot be represented by an ASCII character\n");
   }
   return 0;
}
   /************************************************
      The output should be:
 
   0x7a    The character is z
   0x7b    The character is {
   0x7c    The character is |
   0x7d    The character is }
   0x7e    The character is ~
   0x7f    The character is 
   0x80    Cannot be represented by an ASCII character
   0x81    Cannot be represented by an ASCII character
   0x82    Cannot be represented by an ASCII character
 
   ************************************************/
