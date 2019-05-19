/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 16:19:29 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/19 16:28:14 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
    void    *ptr;

    ptr = (void *)malloc(sizeof(ptr) * size);
    ft_bzero(ptr, sizeof(ptr) * size);
    return (ptr);
}
