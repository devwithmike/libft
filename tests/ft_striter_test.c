/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:23:49 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/21 13:02:45 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
		while (*s)
			f(s++);
}

void do_something(char *s)
{
  printf("s: '%s'\n", s);
}

int main()
{
  char test[] = "Hello World.";
  ft_striter(test, &do_something);
  /* done */
  return 0;
}
