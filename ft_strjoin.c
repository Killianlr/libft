/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:39:57 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/10 17:58:22 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *s12;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	s12 = malloc(sizeof(char) * (len + 1));
	if (!s12)
		return (0);
	while (i < len + 1)
	{
		if (i < ft_strlen((char *)s1))
			s12[i] = s1[i];
		else
			s12[i] = s2[j++];
		i++;
	}
	s12[i] = 0;
	return (s12);
}
/*
int	main(void)
{
	char const s1[] = "rolling ";
	char const s2[] = "stone";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/