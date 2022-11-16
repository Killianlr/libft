/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:03:43 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/16 13:35:59 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char *)s + i == (unsigned char)c)
			return ((void*)s + i);
		i++;
	}
	return (NULL);
}
