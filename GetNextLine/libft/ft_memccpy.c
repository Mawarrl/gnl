/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:16:23 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:59:27 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*castdst;
	unsigned char	*castsrc;
	unsigned char	castc;
	int				i;

	i = 0;
	castc = (unsigned char)c;
	castsrc = (unsigned char*)src;
	castdst = (unsigned char*)dst;
	while (n > 0)
	{
		castdst[i] = castsrc[i];
		if (castsrc[i] == castc)
			return (&dst[i + 1]);
		i++;
		n--;
	}
	return (NULL);
}
