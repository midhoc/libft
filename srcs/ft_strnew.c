/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 15:14:29 by midounhoc         #+#    #+#             */
/*   Updated: 2019/01/22 15:22:21 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strnew(size_t size)
{
    char* str;
    int i = 0;
    str = (char*)malloc(size * sizeof(char));
    if(str == NULL) return NULL;
    while(i < size)
    {
        str[i] = '\0';
        i++;
    }
    return(str);
}