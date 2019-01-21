/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:19:12 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:44:10 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int count;

	i = 0;
	if (!(*needle))
		return ((char*)haystack);
	while (haystack[i] && len > 0)
	{
		count = 0;
		while (haystack[i + count] == needle[count]
				&& (len - (size_t)count) > 0)
		{
			count++;
			if (!(needle[count]))
				return ((char*)&haystack[i]);
		}
		len--;
		i++;
	}
	return (NULL);
}
