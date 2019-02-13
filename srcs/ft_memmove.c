/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:24:25 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 09:08:49 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    void    *cp;

    cp = (void *)malloc(sizeof(void *) * n);
    if(cp == NULL) return(NULL);
    ft_memcpy(cp, src, n);
    ft_memcpy(dst, cp, n);
    free(cp);
    return (dst);
}
