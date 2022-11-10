/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:33:58 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/09 17:44:01 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;
	char	*str;

	str = (char *)nptr;
	i = 0;
	s = 1;
	while (str[i])
	{
		while ((str[i] == ' ') || (str[i] >= 7 && str[i] <= 13))
			i++;
		if (str[i] == '-')
			s = s * -1;
		i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			
		}

	}
}