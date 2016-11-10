/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:14:53 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/09 14:20:36 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strsub(char const *str, unsigned int start, size_t len)
{
	int		i;
	char	*to_find;

	if (!(to_find = malloc(sizeof(char) * len + 1)))
		return (0);
	while (str[start + i])
	{
		dest[i] = str[start + i];
		i++;
	}
	return (dest);
}
