/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:50:15 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 17:03:58 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char			*castb;
	unsigned char	castc;

	castc = (unsigned char)c;
	castb = (char*)b;
	while (len > 0)
	{
		*castb = castc;
		len--;
		castb++;
	}
	return (b);
}
