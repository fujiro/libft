/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:40:50 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/20 17:06:44 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_getsize(int n)
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

char			*ft_itoa(int n)
{
	int		i;
	int		div;
	char	*res;

	i = 0;
	div = 1;
	if (!(res = malloc(sizeof(char) * ft_getsize(n) + 1)))
		return (0);
	if (n < 0)
	{
		n = -n;
		res[i] = '-';
		i++;
	}
	while (n / div > 9)
		div = div * 10;
	while (div != 1)
	{
		res[i] = n / div + 48;
		n = n % div;
		div = div / 10;
		i++;
	}
	res[i] = '\0';
	return (res);
}
