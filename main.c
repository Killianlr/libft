/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:26:06 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/09 17:29:14 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	s1[] = "je mez couche ai neuf heuzre die l'apres minuit";
	const char	s2[] = "zizi";

	//ft_strncmp(s1, s2, n);
	printf("%s", ft_strnstr(s1, s2, 50));
	return (0);
}