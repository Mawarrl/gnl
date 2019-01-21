/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:29:52 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/23 18:03:41 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int number;

	number = 0;
	i = 1;
	while (((*str == '\f' || *str == '\n') || (*str == '\r' || *str == '\t'))
			|| (*str == '\v' || *str == 32))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i = i * -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = ((*str - 48) + (number * 10));
		str++;
	}
	return (number * i);
}
