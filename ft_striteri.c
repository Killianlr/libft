/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:48:19 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/12 16:16:49 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	f(unsigned int i, char *c)
// {
// 	c[i] -= 30;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (i < (unsigned int)ft_strlen(s))
	{
		f(i, s);
		i++;
	}
}

// int main(void)
// {
// 	char	s[50] = "bonsoir";

// 	ft_striteri(s, f);
// 	printf("%s", s);
// 	return(0);
// }