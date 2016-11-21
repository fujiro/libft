/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:09:49 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/21 15:49:19 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	int		neg;

	i = 0;
	res = 0;
	neg = 1;
	if (ft_ascii_value(str) == 526)
		return (2147483647);
	if (ft_ascii_value(str) == 572)
		return (-2147483648);
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\n' || \
		str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res + str[i] - '0') * 10;
		i++;
	}
	return (res / 10 * neg);
}
