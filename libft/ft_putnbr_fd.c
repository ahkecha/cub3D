/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:31:19 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/10 10:49:36 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nb;

	nb = n;
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nb == 2147483648)
		write(fd, "2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb *= -1;
		}
		if (nb > 9)
		{
			ft_putnbr_fd((nb / 10), fd);
			ft_putchar_fd((nb % 10 + '0'), fd);
		}
		else
			ft_putchar_fd((nb + '0'), fd);
	}
}
