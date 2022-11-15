/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:28:01 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/15 18:01:51 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;

	cdest = dest;
	csrc = src;
	while (n-- > 0)
	{
		*cdest++ = *csrc++;
	}
	return (cdest);
}

/*
int	main(void)
{
	char dest[20] = "";
	char src[] = "hello world";

	ft_memcpy(dest, src, 10);
	printf("%s", dest);
	return (0);
}*/