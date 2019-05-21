/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:53:12 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/21 13:05:35 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void *ft_memset(void *str, int c, size_t n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        *((char *)str + i) = c;
        i++;
    }
    return (0);
}

char	*ft_strnew(size_t size)
{
    char    *str;
    
    str = (char*)malloc(size);
    if (str == NULL)
    	return (NULL);
    ft_memset(str, (int)'\0', size + 1);
    return (str);
}

char *ft_strmap(char const *s, char (*f)(char))
{
    char *fresh;
    int i;

    fresh = ft_strnew(ft_strlen(s));
    if (fresh == NULL)
    	return (NULL);
    i = 0;
    while (s[i])
    {
	fresh[i] = f(s[i]);
	i++;
    }
    return (fresh);
}

int main()
{
  char test[] = "Hello World.";
  ft_strmap(test, &ft_putchar);
  return 0;
}
