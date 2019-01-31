/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:26:21 by midounhoc         #+#    #+#             */
/*   Updated: 2019/01/31 15:35:28 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int     nbr_word(char *str, char c)
{
    int j;
    int car;
    int i;

    i = 0;
    car = 0;
    j = 0;
    while (str[i])
    {
            if (str[i] == c)
                car = 0;
            else if (car == 0)
            {
                        j++;
                        car = 1;
                    }
            i++;
        }
    return (j);
}

static int     ft_strlencar(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] != c)
    {
            i++;
        }
    return (i);
}

static char    *ft_strcpycar(char *dest, char *src, char c)
{
    int i;

    i = 0;
    while (src[i] != '\0' && src[i] != c)
    {
            dest[i] = src[i];
            i++;
        }
    dest[i] = '\0';
    return (dest);
}

static char    *ft_strdupcar(char *src)
{
    char    *tmp;
    int     len;

    len = ft_strlencar(src);
    tmp = (char*)malloc(sizeof(char) * len);
    if(tmp == NULL) return(NULL);
    tmp = ft_strcpycar(tmp, src);
    return (tmp);
}

char    **ft_strsplit(char *str, char c)
{
    char    **tab_str;
    int     car;
    int     i;
    int     j;

    j = 0;
    i = 0;
    car = 0;
    tab_str = (char **)malloc(sizeof(char *) * (nbr_word(str) + 1));
    if(tab_str == NULL) return(NULL).
    while (str[i])
    {
            if (str[i] == c)
                car = 0;
            else if (car == 0)
            {
                        tab_str[j] = ft_strdup(str + i);
                        if(tab_str[j] == NULL) return(NULL);
                        j++;
                        car = 1;
                    }
            i++;
        }
    tab_str[j] = 0;
    return (tab_str);
}
