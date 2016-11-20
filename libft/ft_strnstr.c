/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:00:38 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/19 18:58:29 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!to_find)
		return ((char *)str);
	while (str[i])
	{
		if (str[i] == to_find[j] && j < size)
			j++;
		if (str[j] == '\0' || j == size)
			return ((char *)to_find);
		i++;
		j = 0;
	}
	return (0);
}
