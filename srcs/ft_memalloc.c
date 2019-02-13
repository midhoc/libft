/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:38:52 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 11:02:05 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*   ft_memalloc(size_t  size)
{
    void*   p;
    p = (void *)malloc(size * sizeof(size_t));
    if (p == NULL)  return NULL;
    ft_bzero(p,size);
    return (p);
}
