/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:24:25 by midounhoc         #+#    #+#             */
/*   Updated: 2018/08/13 18:48:21 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char   *cp_dst;
    unsigned char   *cp_src;
    int             i;

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

#include <stdio.h>
int main (void)
{
    char string [] = "stackoverflow";
    char *third, *fourth;
    third = string;
    fourth = string;


    char str[] = "foo-bar";
   memmove(&str[3],&str[4],4);
    
    puts(str);
    printf("%s\n",string);
   memcpy(fourth+5, fourth, 7);
   puts(fourth);
    return 0;
}
