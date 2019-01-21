/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:27:27 by rlardere          #+#    #+#             */
/*   Updated: 2018/12/19 14:34:17 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *casts1;
	unsigned char *casts2;

	if (n <= 0)
		return (0);
	while ((*s1 == *s2) && (*s1 && *s2) && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	casts1 = (unsigned char*)s1;
	casts2 = (unsigned char*)s2;
	if (*s1 != *s2)
		return (*casts1 - *casts2);
	return (0);
}
