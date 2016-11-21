/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:44:02 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/21 16:13:45 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *str)
{
	int		i;
	int		j;
	int		len;
	char	*dst;
	char	*rev;

	i = 0;
	j = 0;
	if (!(rev = ft_strrev((char *)str)))
		return (NULL);
	while (str[i] == ' ' || str[i] == ',' || \
		str[i] == '\n' || str[i] == '\t')
		i++;
	while (rev[j] == ' ' || rev[j] == ',' || \
		rev[j] == '\n' || rev[j] == '\t')
		j++;
	len = i + j;
	if (!(dst = malloc(sizeof(char) * (ft_strlen(str) - len))))
		return (NULL);
	j = 0;
	while (j <= (ft_strlen(str) - len))
		dst[j++] = str[i++];
	return (dst);
}
