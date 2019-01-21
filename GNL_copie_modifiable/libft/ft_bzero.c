/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:02:22 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/08 16:00:32 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *casts;

	casts = (unsigned char*)s;
	while (n > 0)
	{
		*casts = '\0';
		n--;
		casts++;
	}
}
