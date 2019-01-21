/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:14:14 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 17:06:42 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*casts;
	unsigned char	castc;
	int				i;

	i = 0;
	castc = (unsigned char)c;
	casts = (unsigned char*)s;
	while (n > 0)
	{
		if (casts[i] == castc)
			return ((void*)(s + i));
		i++;
		n--;
	}
	return (NULL);
}
