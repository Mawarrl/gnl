/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:21:10 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 17:08:10 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*casts1;
	char			*casts2;
	unsigned char	*s22;
	unsigned char	*s11;
	int				i;

	i = 0;
	casts1 = (char*)s1;
	casts2 = (char*)s2;
	s11 = (unsigned char*)s1;
	s22 = (unsigned char*)s2;
	while (n > 0)
	{
		if (casts1[i] != casts2[i])
			return (s11[i] - s22[i]);
		n--;
		i++;
	}
	return (0);
}
