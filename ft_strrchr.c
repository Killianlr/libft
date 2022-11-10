/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:50:34 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/09 14:02:06 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char	*sc;

	i = 0;
	sc = (char *)s;
	while (sc[i])
		i++;
	while (i > 0)
	{
		if (sc[i] == c)
			return (&sc[i]);
		i--;
	}
	return (0);
}