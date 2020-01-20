/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:53:22 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 21:44:53 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>i

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	if (begin_list == NULL)
		return (NULL);
	while (list->next)
	{
		list = list->next;
	}
	return (list);
}
