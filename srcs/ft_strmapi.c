/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:02:50 by midounhoc         #+#    #+#             */
/*   Updated: 2019/01/22 16:10:38 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*   ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    char *str;
    str = (char*)malloc(sizeof(char)*ft_strlen(s));
    if(!str) return(NULL);
    while(s[i] != '\0')
    {
        str[i] = f(i,s[i]);
        i++;
    }
    str[i] ='\0';
    return(str);
}
