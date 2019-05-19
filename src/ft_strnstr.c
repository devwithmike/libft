/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:57:01 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/19 11:57:03 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    int h;
    int n;

    h = 0;
    if (ft_strlen(s2) == 0)
    	return ((char *)s1);
    while (s1[h] != 0 && len > 0)
    {
	n = 0;
	while (s2[n] == s1[h + n] && s1[h + n] != 0 
	    && s2[n] != 0)
	{
	    if (s2[n + 1] == '\0')
	    	return ((char *)s1 + h);
	    n++;
	}
	h++;
	len--;
    }
    return (NULL);
}
