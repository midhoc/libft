/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:49:31 by midounhoc         #+#    #+#             */
/*   Updated: 2019/02/14 13:27:54 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list* ft_lstnew(void const *content, size_t content_size)
{
    t_list  *tmp;

    tmp = (t_list *)malloc(sizeof(t_list));
    if (!tmp)
        return (NULL);
    if(content == NULL)
    {
        tmp->content = NULL;
        tmp->content_size = 0;
    }
    else
    {
        tmp->content = (void *)malloc(content_size);
        if(!tmp->content)
            return(NULL);
        ft_memcpy(tmp->content, content, content_size);
        tmp->content_size = content_size;
    }
    tmp->next = NULL;
    return (tmp);
}
