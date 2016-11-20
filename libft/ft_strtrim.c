/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:44:02 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/18 18:09:09 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strtrim_addon(const char *str, char *dst)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == ',' || \
			str[i] == '\n' || str[i] == '\t')
			i++;
		dst[j] = str[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

char		*ft_strtrim(char const *str)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
		if (str[i] == ' ' || str[i] == ',' || \
			str[i] == '\n' || str[i] == '\t')
			j++;
	}
	if (!(dst = malloc(sizeof(char) * (i - j) + 1)))
		return (NULL);
	return (ft_strtrim_addon(str, dst));
}
