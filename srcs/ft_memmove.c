/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:24:25 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/12 19:18:32 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char   *cp_dst;
    unsigned char   *cp_src;
    size_t           i;

    cp_dst = (unsigned char *)dst;
    cp_src = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
       cp_dst[i] = cp_src[i];
        i++;
    }
    return (dst);
}
