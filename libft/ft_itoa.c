/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:40:50 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/09 13:41:40 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getsize(int n)
{
	int		i;
	int		size;

	i = 1;
	size = 1;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n / i > 9)
	{
		i = i * 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	int		div;
	char	*res;

	i = 0;
	div = 10;
	if (!(res = malloc(sizeof(char) * ft_getsize(n) + 1)))
		return (0);
	if (n < 0)
	{
		n = -n;
		res[i] = '-';
		i++;
	}
	while (i < ft_getsize(n))
	{
		res[i] = n % div;
		i++;
		div = div * 10;
	}
	res[i] = '\0';
	return (res);
}
