/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:20:55 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/21 13:12:02 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
                                                                  
#include <stdio.h>
#include "../includes/libft.h"

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
