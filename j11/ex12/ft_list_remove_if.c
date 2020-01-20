/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 17:57:47 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 16:00:46 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list_ptr;
	t_list *tmp;
	(void) data_ref;
	(void) (cmp);
	if(begin_list
	list_ptr = *begin_list;
	tmp = NULL;
	while (list_ptr)
	{
		//if ((*cmp)(list_ptr->data, data_ref) == 0)
		if (((int)list_ptr->data) == 9)
		{
			tmp->next = list_ptr->next;
		}
		tmp = list_ptr;
		list_ptr = list_ptr->next;
	}
	*begin_list = tmp;
}
