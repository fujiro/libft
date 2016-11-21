/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:52:07 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/21 16:07:02 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(const char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] == '*')
		i++;
	while (str[i])
	{
		if (str[i] != '*' && str[i] != '\0')
			count++;
		i++;
		while (str[i] == '*')
			i++;
	}
	return (count);
}

static char		**ft_strsplit_addon(char **tab, const char *str, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			tab[j][k] = str[i];
			k++;
			i++;
		}
		tab[j][k] = '\0';
		i++;
		j++;
		k = 0;
	}
	return (tab);
}

char			**ft_strsplit(char const *str, char c)
{
	int		i;
	char	**tab;

	i = 0;
	if (!(tab = malloc(sizeof(char *) * ft_count_words(str))))
		return (0);
	while (i < ft_count_words(str))
	{
		if (!(tab[i] = malloc(sizeof(char) * ft_strlen(str) + 1)))
			return (0);
		i++;
	}
	return (ft_strsplit_addon(tab, str, c));
}
