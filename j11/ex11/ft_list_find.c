/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 17:48:34 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 22:09:55 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *list_ptr;
	
	list_ptr = begin_list;
	if (begin_list == NULL)
		return (NULL);
	while (list_ptr->next != NULL && (*cmp)(list_ptr->data, data_ref) != 0)
	{
		list_ptr = list_ptr->next;
	}
	if ((*cmp)(list_ptr->data, data_ref) == 0)
		return (list_ptr);
	else
		return (NULL);
}
