/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 23:55:16 by midounhoc         #+#    #+#             */
/*   Updated: 2018/08/09 23:56:50 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if (0 <= c && c <= 127)
        return (1);
    return (0);
}
