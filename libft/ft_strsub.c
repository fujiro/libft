/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:14:53 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/20 16:31:41 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	int		i;
	char	*dst;

	i = 0;
	if (!(dst = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len > 0 && str[start] != '\0')
	{
		dst[i] = str[start + i];
		i++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}
