/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 19:24:01 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/11 14:07:38 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = -1;
    while (++i < n)
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)(s + i));
    return (NULL);
}
