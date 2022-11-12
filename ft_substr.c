/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:20:08 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/10 17:39:08 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char	*sm;

	i = 0;
	j = (size_t)start;
	if (!s[i] || len == 0)
		return (0);
	sm = malloc(sizeof(char) * len);
	if (!sm)
		return (0);
	while (len > 1)
	{
		sm[i] = s[j];
		i++;
		j++;
		len--;
	}
	sm[i] = '\0';
	return (sm);
}
/*
int	main(void)
{
	char const s[] = "je me couche a neuf heure de l'apres minuit";

	printf("%s", ft_substr(s, 6, 7));
	return (0);
}*/