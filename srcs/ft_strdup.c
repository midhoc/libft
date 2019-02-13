/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:42:49 by hmidoun           #+#    #+#             */
/*   Updated: 2019/02/13 09:13:00 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*tmp;
	int		len;

	len = ft_strlen(src);
	tmp = (char*)malloc(sizeof(char) * len);
    if(!tmp)
        return(NULL);
    tmp = ft_strcpy(tmp, src);
	return (tmp);
}
