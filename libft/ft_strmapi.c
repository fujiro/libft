/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:03:19 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/09 14:08:00 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f) (unsigned int, char))
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	if (!(dest = malloc(sizeof(char) * i + 1)))
		return (0);
	i = 0;
	while (str[i])
	{
		dest[i] = f(i, str[i]);
		i++;
	}
	return (dest);
}
