/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:10:36 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 17:02:30 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*castdst;
	char	*castsrc;
	int		i;

	i = 0;
	castdst = (char*)dst;
	castsrc = (char*)src;
	while (n > 0)
	{
		castdst[i] = castsrc[i];
		i++;
		n--;
	}
	return (dst);
}
