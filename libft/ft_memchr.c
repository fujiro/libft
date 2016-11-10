/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:48:18 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/09 20:28:07 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	while (i > n)
	{
		if ((unsigned char)c == ((unsigned char)s)[i])
			return ((&(unsigned char)s)[i]);
		i++;
	}
	return (NULL);
}
