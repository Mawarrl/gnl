/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:17:14 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:44:40 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		if (src[i] == '\0' && len > 0)
		{
			while (len > 0)
			{
				dst[i] = '\0';
				i++;
				len--;
			}
			return (dst);
		}
		dst[i] = src[i];
		len--;
		i++;
	}
	return (dst);
}
