/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:00:38 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/20 17:53:24 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(to_find))
		return ((char *)str);
	while (str[i])
	{
		if (str[i] == to_find[j])
			j++;
		if (str[j] == '\0')
			return ((char *)to_find);
		i++;
		j = 0;
	}
	return (NULL);
}
