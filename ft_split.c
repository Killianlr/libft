/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:13:40 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/16 18:45:46 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strlendec(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_filltab(char const *s, char c, char **arr, int row)
{
	int	i;
	int	y;
	int	l;

	i = 0;
	y = 0;
	while (i < row)
	{
		l = 0;
		arr[i] = malloc(sizeof(char) * (ft_strlendec(s, c, y) + 1));
		if (!arr[i])
			return (0);
		while (s[y] == c)
			++y;
		while (s[y] != c)
		{
			arr[i][l] = s[y];
			++y;
			++l;
		}
		arr[i][l] = 0;
		++i;
	}
	arr[i] = 0;
	return (arr);
}

int	ft_countrow(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			count++;
		i++;
	}
	return (count);
}

int	ft_check_full(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
		++i;
	if (ft_strlen((char *)s) == i)
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		row;
	char	**arr;

	i = 0;
	if (!ft_check_full(s, c))
		return (0);
	while (*s == c)
		s++;
	row = (ft_countrow(s, c) + 1);
	//printf("row = %d\n", row);
	arr = malloc(sizeof(char *) * (row + 1));
	if (!arr)
		return (0);
	ft_filltab(s, c, arr, row);
	if (!arr[i])
		return (0);
	while (i <= row)
	{
	//printf("i = %d\n", i);
		++i;
	}
	arr[i] = NULL;
	return (arr);
}
/*
int main(void)
{
	char const s[] = "tripouille";
	char c = 0;
	char	**arr;
	// int	i;

	arr = ft_split(s, c);
	// i = 0;
	printf("arr[0] = %s\n", arr[0]);
	printf("arr[1] = %s\n", arr[1]);
	printf("%d", strcmp(arr[0], "tripouille"));
	//printf("arr[2] = %s\n", arr[2]);
	// while (arr[i])
	// {
	// 	printf("%s\n", arr[i]);
	// 	i++;
	// }
	return (0);
}*/
