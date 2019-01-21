/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:57:16 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/24 14:57:28 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	if (srclen + dstlen < dstsize)
		dst = ft_strcat(dst, src);
	else
		dst = ft_strncat(dst, src, (dstsize - dstlen - 1));
	return (srclen + dstlen);
}

int	main(void)
{
	char tab[2];
	char tab2[2];

	tab[0] = 'a';
	tab2[0] = 'a';
	printf("%zu\n", ft_strlcat(tab, "Je test un strlcat !", 2));
	printf("%zu\n", strlcat(tab2, "Je test un strlcat !", 2));
}
