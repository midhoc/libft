/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:42:49 by hmidoun           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/02/13 14:38:47 by midounhoc        ###   ########.fr       */
=======
/*   Updated: 2019/02/13 13:07:27 by midounhoc        ###   ########.fr       */
>>>>>>> 67a891219958df3612e4bf8cd92c62cac56da015
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*tmp;

<<<<<<< HEAD
    tmp = ft_strnew(ft_strlen(src));
=======
    tmp = ft_strnew(ft_strlen(src) + 1);
>>>>>>> 67a891219958df3612e4bf8cd92c62cac56da015
    if(!tmp)
        return(NULL);
    tmp = ft_strcpy(tmp, src);
	return (tmp);
}
