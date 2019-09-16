/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_her.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <mimeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:06:08 by mimeyer           #+#    #+#             */
/*   Updated: 2019/09/16 15:46:46 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*join_her(char **str, char *delim)
{
	int	i;
	char *words;
	char *s;

	i = 0;
	s = ft_strnew(1);
	while (str[i])
	{
		words = ft_strjoin(s, str[i]);
		free(s);
		if (str[i + 1])
			s = ft_strjoin(words, delim);
		else
			s = ft_strdup(words);
		free(words);
		i++;
	}
	return (s);
}
