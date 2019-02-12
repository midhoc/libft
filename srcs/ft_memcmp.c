/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 19:42:30 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/11 14:47:49 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i++ < n)
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
    return (0);
}
