/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 23:39:15 by midounhoc         #+#    #+#             */
/*   Updated: 2018/08/13 21:11:20 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    const char *find;

    find = NULL;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            find = (s + i);
        i++;
    }
    if (c == '\0')
        return((char *)(s + i));
    return(NULL);
}
