/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:37:14 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/09 14:12:05 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, int n)
{
	int		i;
	int		end;

	i = 0;
	end = ft_strlen(src);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < end)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
