/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:50:02 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 16:50:21 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	int		i;
	char	*tab;

	i = 0;
	if (!(s &&(*f)))
		return (NULL);
	len = ft_strlen(s);
	if (!(tab = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (s[i])
	{
		tab[i] = (*f)(s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
