/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 23:39:15 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 09:27:54 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *find;

    find = NULL;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            find = (char *)(s + i);
        i++;
    }
    if (c == '\0')
        return((char *)(s + i));
    return(find);
}
