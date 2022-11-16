/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:23:23 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/15 19:33:48 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	str = NULL;
	i = 0;
	if (!nmemb || !size)
		return (0);
	if (nmemb > 4294967295 / size)
 		return (0);
	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	while (i < size * nmemb)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
/*
int	main(void)
{
	char	*s;
	char	t[] = "hello";

	s = ft_calloc(3, 1);
	ft_strlcpy(s, t, 3);
	printf("%s\n", s);
	free (s);
	printf("%s\n", s);
	return (0);
}*/