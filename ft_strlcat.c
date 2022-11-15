/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:12 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/15 19:25:56 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	j;

	k = 0;
	i = 0;
	j = 0;
	if (size <= 0)
		return (ft_strlen(src));
	j = ft_strlen(dest) + ft_strlen((char *)src);
	while (dest[i])
		i++;
	while (src[k] && i < size - 1)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*
int	main(void)
{
	char	dest[50] = "rolling ";
	char	*src;

	src = "rock n roll";
	//printf("%ld\n", ft_strlcat(dest, src, 50));
	//printf("%ld\n", strlcat(dest, src, 50));
	return (0);
}*/