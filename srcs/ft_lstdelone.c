/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:32:22 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/14 13:36:45 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstdelone(t_list **alst, void(*del)(void *, size_t))
{
    if(alst)
    {
        del((*alst)->content, (*alst)->content_size);
        free(*alst);
        *alst = NULL;
    }
}
