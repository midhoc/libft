/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 00:05:08 by midounhoc         #+#    #+#             */
/*   Updated: 2018/08/13 12:32:17 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    int i;

    i = 0;
    str = (unsigned char *) b;
    while (i < len)
    {    
        str[i] = c;
        i++;
    }
    return (b);
}
