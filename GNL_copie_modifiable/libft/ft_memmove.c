/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:25:14 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 17:03:42 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *castdst;
	char *castsrc;

	castdst = (char*)dst;
	castsrc = (char*)src;
	if (dst <= src)
	{
		while (len > 0)
		{
			*castdst = *castsrc;
			castdst++;
			castsrc++;
			len--;
		}
	}
	if (dst > src)
	{
		while (len > 0)
		{
			castdst[len - 1] = castsrc[len - 1];
			len--;
		}
	}
	return (dst);
}
