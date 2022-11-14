/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:18:15 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/14 14:45:39 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f(unsigned int i, char c)
// {
// 	char	a;

// 	a = c + i;
// 	return (a);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!str)
		return (0);
	while (i < ft_strlen((char *)s))
	{
		str[i] = f(-31, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int	main(void)
{
	char s[50] = "bonsoir";
	char *string;

	string = ft_strmapi(s, f);
	printf("%s", string);
	free(string);
	return (0);
}*/