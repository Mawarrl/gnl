/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:09:05 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 17:09:06 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_iterative_itoa(char *str, int num, int index, int len)
{
	while (len >= 0)
	{
		str[index + len] = (num % 10) + 48;
		num = num / 10;
		len--;
	}
	return ;
}

static int	ft_intlen(int n)
{
	int len;

	len = 1;
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		abs;
	char	*str;
	int		savenum;

	savenum = n;
	abs = 0;
	if (n < 0)
	{
		abs = 1;
		if (n == -2147483648)
			n = -2147483640;
		n = n * -1;
	}
	len = ft_intlen(n);
	if (!(str = (char*)malloc(sizeof(char) * (1 + (abs + len)))))
		return (0);
	if (abs > 0)
		str[0] = '-';
	ft_iterative_itoa(str, n, abs, (len - 1));
	if (savenum == -2147483648)
		str[10] = '8';
	str[len + abs] = '\0';
	return (str);
}
