/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:24:25 by midounhoc         #+#    #+#             */
/*   Updated: 2019/01/14 14:10:54 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    while (n--)
                ((char *)dst)[n] = ((char *)src)[n];
    return (dst);
}
