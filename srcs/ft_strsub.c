/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:38:20 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 12:33:56 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char* ft_strsub(char const *s, unsigned int start, size_t len)
{
    char* str;
    size_t i;
   
    str = ft_strnew(len);
    if(!str || !s) 
        return(NULL);
    i = 0;
    while(i < len)
    {
        str[i] = s[start +i];
        i++;
    }
    return(str);
}
