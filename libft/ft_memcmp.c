/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:18:24 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/09 13:44:16 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (((unsigned char *)s1)[n] != ((unsigned char *)s2)[n])
			return (((unsigned char *)s2)[n] - ((unsigned char *)s2)[n]);
		n--;
	}
	return (0);
}
