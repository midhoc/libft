/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:02:50 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 12:27:39 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*   ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *str;
    
    if (!s)
        return(NULL);
    str = (ft_strnew(ft_strlen(s)));
    if(!str || !f) 
        return(NULL);
    i = 0;
    while(s[i] != '\0')
    {
        str[i] = f(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}
