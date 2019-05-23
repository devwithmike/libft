/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:51:22 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/23 08:35:52 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*((char *)dest2 + i) = *((char *)src2 + i);
		i++;
		if (*((char *)src2 + i) == ((unsigned char)c))
		{
			*((char *)dest2 + i) = *((char *)src2 + i);
			break ;
		}
	}
	return (dest2);
}
