/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 16:19:29 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/22 10:56:43 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (!(ptr = (void *)malloc(sizeof(ptr) * size)))
		return (NULL);
	ft_bzero(ptr, sizeof(ptr) * size);
	return (ptr);
}
