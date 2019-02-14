/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:39:06 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/14 13:46:02 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstdel(t_list **alst, void(*del)(void*, size_t))
{
    if(alst && *alst)
    {
        ft_lstdel(&(*alst)->next, *del);
        ft_lstdelone(alst, *del);
    }
}
