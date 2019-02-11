/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:15:10 by hmidoun           #+#    #+#             */
/*   Updated: 2018/08/13 21:03:33 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int i;
	int j;

	if (*to_find == '\0' && !len)
		return ((char *)str);
	j = 0;
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)str + i - j + 1);
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}
