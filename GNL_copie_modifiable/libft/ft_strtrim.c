/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:39:07 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:42:13 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static	int		ft_count(const char *s)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if (s == NULL)
		return (count);
	while (s[i])
	{
		if (!(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			count = 0;
		i++;
		count++;
	}
	return (count);
}

char	*ft_strtrim(char const *s)
{
	int len;
	int i;
	int j;

	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[j] && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j++;
	len = ft_strlen(s);
	if (len == j || *s == '\0')
		return (ft_strnew(0));
	i = ft_count(s);
	return (ft_strsub(s, j, (len - (i + j) + 1)));
}
