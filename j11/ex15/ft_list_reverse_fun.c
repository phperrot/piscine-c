/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:34:37 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 15:48:21 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *cur;
	t_list *prev;
	t_list *foll;

	cur = begin_list;
	prev = 0;
	while (cur->next)
	{
		foll = cur->next;
		cur->next = prev;
		prev = cur;
		cur = foll;
		printf("prev: %d -- cur: %d -- fol: %d\n", (int) prev->data, (int)cur->data, (int)foll->data);
	}
	cur->next = prev;
	begin_list = cur;
}
