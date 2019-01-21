/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:23:25 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/24 14:07:45 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *casts1;
	unsigned char *casts2;

	while ((*s1 == *s2) && (*s1 && *s2))
	{
		s1++;
		s2++;
	}
	casts1 = (unsigned char*)s1;
	casts2 = (unsigned char*)s2;
	if (*s1 != *s2)
		return ((int)*casts1 - (int)*casts2);
	return (0);
}
