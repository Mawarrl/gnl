/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:37:16 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:41:48 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**ft_strsplit_tab(char const *s, char c, int *count)
{
	char	**tab;
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
		if ((s[i] == c && s[i - 1] != c) || (s[i] == '\0' && s[i - 1] != c))
			*count = *count + 1;
	}
	if (!(tab = (char**)malloc(sizeof(char*) * (*count + 1))))
		return (0);
	return (tab);
}

static int	ft_strsplit_3(char const *s, int index, char c)
{
	int i;

	i = 0;
	while (s[i + index] != c && s[i + index] != '\0')
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		count;
	int		i;
	int		j;
	int		k;

	k = 0;
	j = 0;
	i = 0;
	count = 0;
	if (!(s))
		return (NULL);
	if (!(tab = ft_strsplit_tab(s, c, &count)))
		return (0);
	while (k != count)
	{
		i = i + j;
		while (s[i] == c)
			i++;
		j = ft_strsplit_3(s, i, c);
		tab[k] = ft_strsub(s, i, j);
		k++;
	}
	tab[k] = 0;
	return (tab);
}
