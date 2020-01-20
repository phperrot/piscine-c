/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:56:26 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 11:30:14 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *list;

	tmp = ft_create_elem(data);
	list = *begin_list;
	while (list->next)
		list = list->next;
	list->next = tmp;
}
