/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:51:53 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/22 15:04:00 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (str1 == NULL || str2 == NULL)
		return (NULL);
	while (i < n)
	{
		*((char *)str1 + i) = *((char *)str2 + i);
		i++;
	}
	return (str1);
}
