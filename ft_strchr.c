/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:58:09 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/09 13:48:44 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*sc;

	sc = (char *)s;
	i = 0;
	while (sc[i])
	{
		if (sc[i] == c)
			return (&sc[i]);
		i++;
	}
	if (sc[i] == c)
		return (&sc[i]);
	return (0);
}