/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 12:48:07 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 14:40:34 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char* ft_strtrim(char const *s)
{
    char    *str;
    int     s_len, d_len, i;

    if(!s)
        return(NULL);
    i = 0;
    d_len = 0;
    s_len = ft_strlen(s);
    while(s[d_len] == ' '||s[d_len] == '\n'||s[d_len] == '\t') 
        d_len++;
    while((s[s_len-1] == ' '||s[s_len-1] == '\n'||s[s_len-1] == '\t') && s_len-1 >= d_len) 
        s_len--;
    str = ft_strnew(s_len-d_len);
    if(str == NULL) return NULL;
    while(i + d_len< s_len)
     {
        str[i] = s[i+d_len];
        i++;
    }
    str[s_len]='\0';
    return(str);
}
