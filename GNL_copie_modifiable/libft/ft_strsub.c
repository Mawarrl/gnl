/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:42:36 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:42:38 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	int		count;

	if (s == NULL)
		return (NULL);
	count = -1;
	if (!(copy = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (++count < (int)len)
		copy[count] = s[count + start];
	copy[count] = '\0';
	return (copy);
}
