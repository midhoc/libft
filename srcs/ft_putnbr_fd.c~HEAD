/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 22:25:04 by hmidoun           #+#    #+#             */
/*   Updated: 2019/02/11 13:49:09 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int counter;

	counter = 1;
	if (nb < 0)
	{
		ft_putchar_fd('-',fd);
		if (nb == -2147483648)
		{
			nb = -147483648;
			ft_putchar_fd('2',fd);
		}
		nb *= -1;
	}
	while (nb / counter > 9)
	{
		counter *= 10;
	}
	while (counter >= 1)
	{
		ft_putchar_fd('0' + nb / counter,fd);
		nb = nb - (nb / counter) * counter;
		counter /= 10;
	}
}
