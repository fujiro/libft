/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:08:13 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/09 20:26:48 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*mem;
	char			*index;
	unsigned int	count;

	mem = (void *)malloc(size);
	index = (char *)mem;
	count = 0;
	if (mem != NULL)
	{
		while (count < size)
		{
			*index = 0;
			*index++;
			count++;
		}
	}
	return (mem);
}
