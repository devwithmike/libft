#include <stdio.h>
#include "../includes/libft.h"

int main()
{
    int x = 5;
    int y = 6;

    printf("Before the swap x:%d; y:%d",x,y);
    ft_swap(&x, &y);
    printf("After the swap x:%d; y:%d",x, y);
}

/*
*   Before the swap x:5; y:6
*
*   After the swap x:6; y:5
*/
