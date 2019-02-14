/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:13:15 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/14 14:15:15 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstiter(t_list *lst, void(*f)(t_list *elem))
{
    if(lst)
    {
        f(lst);
        ft_lstiter(lst->next, *f);
    }
}
