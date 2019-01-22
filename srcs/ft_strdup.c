/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:42:49 by hmidoun           #+#    #+#             */
/*   Updated: 2018/08/13 21:21:36 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

char	*ft_strdup(const char *src)
{
	char	*tmp;
	int		len;

	len = ft_strlen(src);
	tmp = (char*)malloc(sizeof(char) * len);
	tmp = ft_strcpy(tmp, src);
	return (tmp);
}
