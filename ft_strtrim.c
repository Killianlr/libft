/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:59:08 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/11 00:11:41 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checksetav(char const *s1, char const *set)
{
	int	i;
	int j;
	int e;

	j = 0;
	i = 0;
	while (s1[i])
	{
		e = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				e = 1;
			j++;
		}
		i++;
		j = 0;
		if (e == 0)
			return (i);
	}
	return (i);
}

int	ft_checksetar(char const *s1, char const *set)
{
	int	i;
	int j;
	int e;

	j = 0;
	i = (ft_strlen((char *) s1) - 1);
	while (i > 0)
	{
		e = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				e = 1;
			j++;
		}
		i--;
		j = 0;
		if (e == 0)
			return (i);
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int i;
	int j;
	int len;

	j = 0;
	len = (ft_checksetar(s1, set) - ft_checksetav(s1, set));
	i = ft_checksetav(s1, set) - 1;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (i <= ft_checksetar(s1, set) + 1)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	return (str);
}

int	main(void)
{
	char const s1[] = "l8l";
	char const set[] = "abcdefghijklmnopqrstuvwxyz";
	char *su;

	su = ft_strtrim(s1, set);
	//ft_strtrim(s1, set);
	printf("%s", su);
	free(su);
	return (0);
}