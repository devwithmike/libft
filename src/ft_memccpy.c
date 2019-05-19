/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:51:22 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/19 11:51:26 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
			*((char *)dest + i) = *((char *)src + i);
			i++;
			if (*((char *)src + i) == c)
			{
				*((char *)dest + i) = *((char *)src + i);
				break;
			}
    }
		return (0);
}
