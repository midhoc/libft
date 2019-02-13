/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 15:14:29 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 14:35:37 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strnew(size_t size)
{
    char*   str;
    size_t  i;
    
    i = 0;
    str = (char*)malloc((size +1) * sizeof(char));
    if(str == NULL) 
        return (NULL);
    while(i <= size)
    {
        str[i] = '\0';
        i++;
    }
    return(str);
}
