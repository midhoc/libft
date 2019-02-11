/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 15:16:08 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/05 15:16:47 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void    ft_putendl_fd(char const *s, int fd)
{
    ft_putstr_fd(s,fd);
    ft_putchar('\n',fd);
}
