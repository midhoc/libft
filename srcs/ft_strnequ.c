/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:20:50 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 12:31:52 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    if(s1 && s2)
    {
        if(!ft_strncmp(s1,s2,n))
            return(1);    
    }
    return(0);
}
