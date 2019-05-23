/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:34:01 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/21 13:03:54 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))                    
{                                                                               
     unsigned int i;                                                             
                                                                                 
     i = 0;                                                                      
     if (s && f)                                                                 
         while (*s)                                                              
             f(i++, s++);                                                        
}  

void do_something(unsigned int i, char *s)
{
  printf("i: '%d'  s: '%s'\n",i, s);
}

int main()
{
  char test[] = "Hello World.";
  ft_striteri(test, &do_something);
  /* done */
  return 0;
}
