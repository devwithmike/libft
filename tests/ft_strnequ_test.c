/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:20:55 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/20 09:21:17 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
                                                                  
#include <stdio.h>
#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
		if (i == n)
			break;
	}
	return (1);
}

int main()
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "abcdef");
	strcpy(str2, "abcdas");

	ret =  ft_strnequ(str1, str2, 4);

	if (ret == 0)
		printf("different");
	else if (ret == 1)
		printf("same");
	else
		printf("error");
	return (0);
}
