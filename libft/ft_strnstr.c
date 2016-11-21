/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:00:38 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/21 16:10:54 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	pos;
	char	*tmp;

	i = 0;
	j = 0;
	tmp = (char *)str;
	if (!(to_find))
		return (&(((char *)str)[0]));
	while (tmp[i] && i < size)
	{
		pos = i;
		while (tmp[i] == to_find[j] && tmp[i] != '\0' && i < size)
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0')
			return (&(tmp)[i - j]);
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
