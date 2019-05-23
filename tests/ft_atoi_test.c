#include "../includes/libft.h"
#include <stdio.h>

int main () {
   int val;
   char str[20];
   
   strcpy(str, "/98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}

// String value = 98993489, Int value = 98993489
// String value = tutorialspoint.com, Int value = 0
