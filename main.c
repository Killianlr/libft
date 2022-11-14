/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:26:06 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/12 15:40:32 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	s1[] = "je me couche a neuf heure de l'apres minuit";
	const char	s2[] = "";

	printf("%s", ft_strnstr(s1, s2, 50));
	return (0);
}
