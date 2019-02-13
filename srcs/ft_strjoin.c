/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:44:28 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 12:38:54 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char* ft_strjoin(char const *s1, char const *s2)
{
    char* str;
    int i, len_s1;

    if (!s1 || !s2)
        return(NULL);
    len_s1 = ft_strlen(s1);
    str = ft_strnew(len_s1 + ft_strlen(s2));
    if(!str) 
        return(NULL);
    i = 0;
    while(s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[i-len_s1] != '\0')
    {
        str[i] = s2[i-len_s1];
        i++;
    }
    str[i] = '\0';
    return(str);
}
