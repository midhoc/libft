/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 13:02:47 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/12 19:20:05 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"stdio.h"
static char*    ft_maxint()
{
    char    *str;

    str=(char *)malloc(sizeof(char)*11);
    if(str==NULL) return(NULL);
    return(ft_strcpy(str,"-2147483648"));
}
    
static  int     power_neg(int n, int *len, int *div,int *neg)
{
    *div = 1;
    *len = 0; 
    *neg = 0;
    if(n<0)
    {
        *neg = 1;
        (*len) += 1;
        n *= -1;
     }

    while (n / (*div) > 9)
        {
            (*len) += 1;
            (*div) *=10;
         }
    return(n);
}

static  char*           ft_fill_str(char *str, int n,int len, int div, int neg)
{
    int i;

    i = 0;
    while (i<= len)
    {
        if(neg == 1)
        {
            neg = 0;
            str[0]='-';
            i++;
        }
        str[i]=('0' + n / div);
        n = n - (n / div) * div;
        div /= 10;
        i++;
    }
    return(str);
}

char*           ft_itoa(int n)
{
    int     len;
    int     div;
    int     neg;
    char*   str;

    str = NULL;
    if(n == -2147483648) return(ft_maxint());
    n = power_neg(n,&len,&div,&neg);
    str=(char*)malloc(sizeof(char)*(len));
    if(str==NULL) return(NULL);
    return(ft_fill_str(str,n,len,div,neg)); 
}          
