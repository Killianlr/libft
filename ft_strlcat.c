/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:12 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/09 13:41:31 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	int k;
	int j;

	k = 0;
	i = 0;
	j = 0;
	if (n <= 0)
		return (1);
	j = ft_strlen(dest) + ft_strlen((char *)src) + 1;
	while (dest[i] && i < n - 1)
	{
		i++;
	}
	while (src[k] && i < n - 1)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	while (src[k])
	{
		k++;
		i++;
	}
//	printf("%s\n", dest);
	return (j);
}
/*
int	main(void)
{
	char	dest[50] = "rolling ";
	char	*src;

	src = "rock n roll";
	printf("%d\n", ft_strlcat(dest, src, 50));
	return (0);
}*/