/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:03:19 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/07 08:08:23 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmap(char *str, char (*f)(char))
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	if (!(dest = malloc(sizeof(char) * i + 1)))
		return (0);
	i = 0;
	while (str[i])
	{
		dest[i] = f(str[i]);
		i++;
	}
	return (dest);
}
