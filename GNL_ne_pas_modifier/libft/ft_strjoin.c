/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:52:18 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:52:40 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(str = ft_strnew(sizeof(char) * (i + (j + 1)))))
		return (0);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
