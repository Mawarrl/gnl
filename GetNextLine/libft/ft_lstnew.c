/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:09:57 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/24 12:01:00 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*s_lst;

	if (!(s_lst = ft_memalloc(sizeof(s_lst))))
		return (0);
	if (!(content))
	{
		s_lst->content = NULL;
		s_lst->content_size = 0;
	}
	else
	{
		if (!(s_lst->content = ft_memalloc(content_size)))
			return (0);
		s_lst->content = ft_memcpy(s_lst->content, content, content_size);
		s_lst->content_size = content_size;
	}
	s_lst->next = NULL;
	return (s_lst);
}
