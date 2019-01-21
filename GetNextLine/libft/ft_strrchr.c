/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:03:52 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:42:56 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int count;
	int i;

	i = 0;
	count = -1;
	if ((char)c == '\0')
	{
		while (s[i])
			i++;
		return ((char*)&s[i]);
	}
	while (s[i])
	{
		if (s[i] == (char)c)
			count = i;
		i++;
	}
	if (count >= 0)
		return ((char*)&s[count]);
	return (NULL);
}
