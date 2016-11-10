/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:44:02 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/09 14:22:51 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#incliude "libft.h"

char	*ft_strtrim_addon(char const *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == '-' || str[i] == ',' || \
			str[i] == '\n' || str[i] == '\t')
			i++;
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
		if (str[i] == ' ' || str[i] == ',' || \
			str[i] == '\n' || str[i] == '\t')
			j++;
	}
	if (!(dest = malloc(sizeof(char) * (i - j) + 1)))
		return (0);
	return (ft_strtrim_addon(str));
}
