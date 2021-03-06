/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:28:08 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/20 17:03:28 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;

	i = 1;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	while (n / i > 9)
		i = i * 10;
	while (i != 1)
	{
		ft_putchar_fd(n / i + 48, fd);
		n = n % i;
		i = i / 10;
	}
	ft_putchar_fd(n / i + 48, fd);
}
