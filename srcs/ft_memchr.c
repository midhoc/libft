/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 19:24:01 by midounhoc         #+#    #+#             */
/*   Updated: 2018/08/13 19:40:26 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    int i;

    i = -1;
    while (++i < n)
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)(s + i));
    return (NULL);
}
