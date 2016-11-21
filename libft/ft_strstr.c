/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:00:38 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/21 15:40:33 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	int		pos;
	char	*tmp;

	i = 0;
	j = 0;
	tmp = (char *)str;
	if (!(to_find))
		return (&(((char *)str)[0]));
	while (tmp[i])
	{
		pos = i;
	while (tmp[i] == to_find[j] && tmp[i] != '\0')
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0')
			return (&(tmp[i - j]));
		else
		{
			i = pos;
			j = 0;
		}
		i++;
	}
	if (to_find[j] == tmp[i])
		return (&(tmp[i - j]));
	return (NULL);
}
