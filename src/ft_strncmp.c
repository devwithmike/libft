/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:56:30 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/21 09:20:53 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	count;
	int				s1_total;
	int				s2_total;

	count = 0;
	s1_total = 0;
	s2_total = 0;
	while ((s1[count] != '\0') || (s2[count] != '\0'))
	{
		if (s1[count] != s2[count])
		{
			s1_total = s1[count];
			s2_total = s2[count];
			break ;
		}
		count++;
		if (count <= n)
			break ;
	}
	return (s1_total - s2_total);
}
