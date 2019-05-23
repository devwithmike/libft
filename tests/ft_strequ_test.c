/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:42:48 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/21 13:00:56 by mimeyer          ###   ########.fr       */
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
	strcpy(str2, "Absdkjfh");

	ret =  ft_strequ(str1, str2);

	if (ret == 0)
		printf("different");
	else if (ret == 1)
		printf("same");
	else
		printf("error");
	return (0);
}
