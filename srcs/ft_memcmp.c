/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 19:42:30 by midounhoc         #+#    #+#             */
/*   Updated: 2018/08/13 20:00:13 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = -1;
    while (++i < n)
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
    return (0);
}
