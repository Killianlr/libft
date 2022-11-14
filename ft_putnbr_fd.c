/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:14:33 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/12 15:19:46 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < (-2147483647))
		write(1, "-2147483648", 11);
	else if (n >= 0 && n < 10)
		ft_putchar_fd((n + '0'), fd);
	else if (n < 0)
	{
		ft_putchar_fd(('-'), fd);
		ft_putnbr_fd((n * (-1)), fd);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}
/*
int	main(void)
{
	int c;
	int fd;

	c = -2147483648;
	fd = 1;
	ft_putnbr_fd(c, fd);
	return (0);
}*/