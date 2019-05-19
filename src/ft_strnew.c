/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:52:05 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/19 15:54:57 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
    char    *str;
    
    str = (char*)malloc(size);
    if (str == NULL)
    	return (NULL);
    ft_memset(str, (int)'\0', size + 1);
    return (str);
}
