/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 16:57:36 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 22:14:12 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
void	ft_list_reverse(t_list **begin_list)
{
	t_list *cur;
	t_list *prev;
	t_list *foll;

	cur = *begin_list;
	prev = NULL;
	while (cur->next)
	{
		foll = cur->next;
		cur->next = prev;
		prev = cur;
		cur = foll;
	}
	cur->next = prev;
	*begin_list = cur;
}
