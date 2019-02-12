/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 01:16:26 by hmidoun           #+#    #+#             */
/*   Updated: 2019/02/11 14:10:18 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int i;
	size_t j;

	j = 0;
	i = ft_strlen(dest);
	while (j < nb)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
