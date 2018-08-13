/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 12:48:51 by hmidoun           #+#    #+#             */
/*   Updated: 2018/07/08 03:26:57 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int number;

	number = 0;
	neg = 1;
	i = 0;
	while ((*(str + i) >= 0 && *(str + i) < 33))
	{
		i++;
	}
	if (*(str + i) == '-')
	{
		neg = -1;
		i++;
	}
	else if (*(str + i) == '+')
		i++;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		number = number * 10 + *(str + i) - '0';
		i++;
	}
	number *= neg;
	return (number);
}
