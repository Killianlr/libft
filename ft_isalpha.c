/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:45:44 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/07 11:54:49 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
		return(1);
	else
		return(0);
}