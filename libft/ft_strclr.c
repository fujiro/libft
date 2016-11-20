/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:58:31 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/19 19:44:34 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *str)
{
	int		i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
		while (i >= 0)
		{
			str[i] = '\0';
			i--;
		}
	}
}
