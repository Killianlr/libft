/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:19:28 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/12 16:04:27 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;
	char		temp[n];
	int			i;

	i = 0;
	cdest = dest;
	csrc = src;
	while (csrc[i])
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (n-- > 0)
	{
		cdest[i] = temp[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "hello world";

	memmove(src + 4, src, 5);
	printf("%s", src);
	return (0);
}*/
/*
int	main(void)
{
	char src[] = "hello world";

	memmove(src + 4, src, 5);
	printf("%s", src);
	return (0);
}*/