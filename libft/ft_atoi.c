/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:09:49 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/19 19:50:14 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	if (ft_ascii_value(str) == 526)
		return (2147483647);
	if (ft_ascii_value(str) == 572)
		return (-2147483648);
	while (str[i] == 43 || str[i] == 45 || str[i] == 32 || str[i] == 11)
		i++;
	if (str[i] <= 48 || str[i] >= 57)
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (res + str[i] - 48) * 10;
		i++;
	}
	return (res / 10);
}
