/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 15:54:01 by midounhoc         #+#    #+#             */
/*   Updated: 2019/01/22 16:00:23 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
char*   ft_strmap(char const *s, char (*f)(char))
{
    int i = 0;
    char *str;
    str = (char*)malloc(sizeof(char)* ft_strlen(s));
    if (!str) return(NULL);
    while(s[i] != '\0')
    {
        str[i] = f(s[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}
