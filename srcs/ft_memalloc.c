/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:38:52 by midounhoc         #+#    #+#             */
/*   Updated: 2019/01/22 15:05:29 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*   ft_memalloc(size_t  size)
{
    void*   p;
    p = malloc(size);
    if (p == NULL)  return NULL;
    return ft_memset(p, 0, size);
}
