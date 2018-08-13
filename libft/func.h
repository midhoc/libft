/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 12:32:34 by midounhoc         #+#    #+#             */
/*   Updated: 2018/08/13 17:01:25 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_H
# define FUNC_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char    *ft_strcpy(char *dest, char *src);


void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c,  size_t n);
#endif
