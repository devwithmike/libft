#include<stdio.h> 
#include "../includes/libft.h"

int main() 
{ 
    char source[] = "GeeksForGeeks"; 
  
    // A copy of source is created dynamically 
    // and pointer to copy is returned. 
    char* target = ft_strdup(source);  
  
    printf("%s", target); 
    return 0; 
}

/*
*   Output: GeeksForGeeks
*/
