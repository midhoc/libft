/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:26:21 by midounhoc         #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/02/11 13:42:57 by midounhoc        ###   ########.fr       */
=======
/*   Updated: 2019/01/31 15:35:28 by midounhoc        ###   ########.fr       */
>>>>>>> f0c0a2755b79202e3920621f5356bfdb26193ea6
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
static int     nbr_word(char const *str, char c)
=======
static int     nbr_word(char *str, char c)
>>>>>>> f0c0a2755b79202e3920621f5356bfdb26193ea6
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

<<<<<<< HEAD
static int     ft_strlencar(char const *str, char c)
=======
static int     ft_strlencar(char *str, char c)
>>>>>>> f0c0a2755b79202e3920621f5356bfdb26193ea6
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] != c)
    {
            i++;
        }
    return (i);
}

<<<<<<< HEAD
static char    *ft_strcpycar(char *dest, char const *src, char c)
=======
static char    *ft_strcpycar(char *dest, char *src, char c)
>>>>>>> f0c0a2755b79202e3920621f5356bfdb26193ea6
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

<<<<<<< HEAD
static char    *ft_strdupcar(char const *src, char c)
=======
static char    *ft_strdupcar(char *src)
>>>>>>> f0c0a2755b79202e3920621f5356bfdb26193ea6
{
    char    *tmp;
    int     len;

<<<<<<< HEAD
    len = ft_strlencar(src, c);
    tmp = (char*)malloc(sizeof(char) * len);
    if(tmp == NULL) return(NULL);
    tmp = ft_strcpycar(tmp, src, c);
    return (tmp);
}

char    **ft_strsplit(char const *str, char c)
=======
    len = ft_strlencar(src);
    tmp = (char*)malloc(sizeof(char) * len);
    if(tmp == NULL) return(NULL);
    tmp = ft_strcpycar(tmp, src);
    return (tmp);
}

char    **ft_strsplit(char *str, char c)
>>>>>>> f0c0a2755b79202e3920621f5356bfdb26193ea6
{
    char    **tab_str;
    int     car;
    int     i;
    int     j;

    j = 0;
    i = 0;
    car = 0;
<<<<<<< HEAD
    tab_str = (char **)malloc(sizeof(char *) * (nbr_word(str, c) + 1));
    if(tab_str == NULL) return(NULL);
    while (str[i] != '\0')
=======
    tab_str = (char **)malloc(sizeof(char *) * (nbr_word(str) + 1));
    if(tab_str == NULL) return(NULL).
    while (str[i])
>>>>>>> f0c0a2755b79202e3920621f5356bfdb26193ea6
    {
            if (str[i] == c)
                car = 0;
            else if (car == 0)
            {
<<<<<<< HEAD
                tab_str[j] = ft_strdupcar(str + i,c);
                if(tab_str[j] == NULL) return(NULL);
                   j++;
                   car = 1;
             }
            i++;
    }
=======
                        tab_str[j] = ft_strdup(str + i);
                        if(tab_str[j] == NULL) return(NULL);
                        j++;
                        car = 1;
                    }
            i++;
        }
>>>>>>> f0c0a2755b79202e3920621f5356bfdb26193ea6
    tab_str[j] = 0;
    return (tab_str);
}
