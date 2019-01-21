/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:53:55 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:57:30 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char castc;
	char *p;

	castc = (char)c;
	while (*s || *s == '\0')
	{
		if (*s == castc)
		{
			p = (char*)s;
			return (p);
		}
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (NULL);
}
