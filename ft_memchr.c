/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:03:43 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/09 15:15:24 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	size_t i;

	i = 0;
	str = (unsigned char *)s;
	while (str[i] && i <= n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}