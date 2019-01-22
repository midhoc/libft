/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 00:05:08 by midounhoc         #+#    #+#             */
/*   Updated: 2019/01/22 15:03:32 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    size_t i;

    i = 0;
    str = (unsigned char *) b;
    while (i < len)
    {    
        str[i] = c;
        i++;
    }
    return (b);
}
