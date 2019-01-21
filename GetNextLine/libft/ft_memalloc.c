/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:55:15 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 17:10:00 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	*memory;

	if (!(memory = (size_t*)malloc(sizeof(size_t) * size)))
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}
