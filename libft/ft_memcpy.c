/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:24:25 by midounhoc         #+#    #+#             */
/*   Updated: 2018/08/13 19:00:27 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    while (n--)
                ((char *)dst)[n] = ((char *)src)[n];
    return (dst);
}

int main()                              {

    char string [] = "stackoverflow";
        char *third, *fourth;
            third = string;
                fourth = string;

                    puts(string);
                        ft_memcpy(third+5, third, 7);
                            puts(third);
                            return 0;}
