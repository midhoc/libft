/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:38:20 by midounhoc         #+#    #+#             */
/*   Updated: 2019/01/22 16:42:47 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char* ft_strsub(char const *s, unsigned int start, size_t len)
{
    char* str;
    int i = 0;
    str = (char*)malloc(sizeof(char) * len);
    if(!str) return(NULL);
    while(i < len)
    {
        str[i] = s[start +i];
        i++;
    }
    return(str);
}