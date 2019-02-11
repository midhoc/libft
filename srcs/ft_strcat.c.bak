/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:52:02 by hmidoun           #+#    #+#             */
/*   Updated: 2018/08/13 21:16:23 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
