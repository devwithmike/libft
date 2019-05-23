#include<stdio.h> 
#include "../includes/libft.h" 
  
int main() 
{ 
   char str[50] = "geeksforgeeks"; 
  
   printf("The given string is =%s\n",str); 
  
   printf("After reversing string is =%s",ft_strrev(str)); 
  
   return 0; 
}

/*
*   The given string is =geeksforgeeks
*   After reversing string is =skeegrofskeeg
*/
