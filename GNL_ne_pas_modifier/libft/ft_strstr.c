/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:06:47 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:43:23 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		count;
	char	*chaystack;

	chaystack = (char*)haystack;
	i = 0;
	if (!(*needle))
		return (chaystack);
	while (chaystack[i])
	{
		count = 0;
		while (haystack[i + count] == needle[count])
		{
			count++;
			if (needle[count] == '\0')
				return (&chaystack[i]);
		}
		i++;
	}
	return (NULL);
}
