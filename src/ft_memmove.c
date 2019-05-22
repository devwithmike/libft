/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:52:06 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/22 11:36:16 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;

	dest2 = (char*)malloc(sizeof(char) * n + 1);
	dest2[n + 1] = '\0';
	ft_memcpy(dest2, src, n);
	ft_memcpy(dest, dest2, n);
	free(dest2);
	return (dest);
}
