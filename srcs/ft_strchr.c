/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 23:28:40 by midounhoc         #+#    #+#             */
/*   Updated: 2018/08/13 21:09:30 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return((char *)s + i);
        i++;
    }
    if (c == '\0')
        return((char *)s + i);
    return(NULL);
}
