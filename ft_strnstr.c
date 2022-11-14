/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:50:22 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/12 16:02:21 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	if (!big[i])
		return (0);
	while (big[i] && i < len - 1)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len - 1)
		{
			j++;
			if (j == (size_t)ft_strlen((char *)little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
