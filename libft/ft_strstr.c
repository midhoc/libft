/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:15:10 by hmidoun           #+#    #+#             */
/*   Updated: 2018/07/12 12:26:39 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == '\0')
		return (str);
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i - j + 1);
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}
