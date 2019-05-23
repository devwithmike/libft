/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:51:53 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/23 08:33:35 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned int		i;
	unsigned char		*dest;
	unsigned const char	*str;

	i = 0;
	dest = (unsigned char *)str1;
	str = (unsigned char *)str2;
	str = str2;
	if (dest == NULL || str == NULL)
		return (NULL);
	while (i < n)
	{
		*((char *)dest + i) = *((char *)str + i);
		i++;
	}
	return (dest);
}
