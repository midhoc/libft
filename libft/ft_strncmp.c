/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:48:59 by hmidoun           #+#    #+#             */
/*   Updated: 2018/08/13 20:55:57 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i <= n)
	{
		if (s1[i] == '\0' || i == n)
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
