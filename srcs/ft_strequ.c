/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:16:17 by midounhoc         #+#    #+#             */
/*   Updated: 2019/01/22 16:20:27 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_strequ(char const *s1, char const *s2)
{
    if(ft_strcmp(s1, s2) == 0) return(1);
    return(0);
}