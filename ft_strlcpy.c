/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:54:56 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/09 13:39:28 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (n <= 0)
		return (1);
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
//	printf("%s, %ld", dest, i);
	return (i);
}
/*
int	main(void)
{
	char	dest[500] = "";
	char	src[] = "hello world";

	ft_strlcpy(dest, src, 5);
}*/