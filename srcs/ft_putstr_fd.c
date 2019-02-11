/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 15:14:24 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/05 15:15:28 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void    ft_putstr_fd(char const *str, int fd)
{
    int i;

    i = 0;
    while (*(str + i) != '\0')
    {
            ft_putchar_fd(*(str + i),fd);
            i++;
        }
}
