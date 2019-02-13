/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 15:49:55 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/13 12:04:17 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_striteri(char *s, void(*f)(unsigned int, char*))
{
    int i;

    i = 0;
    if(s && f)
    {
         while(s[i])
        {
            f(i,s+i);
            i++;
        }
    }
}
