/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 16:13:07 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 22:13:27 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;

	list = *begin_list;
	if (list)
	{
		ft_list_clear(&list->next);
		free(list);
	}
	*begin_list = NULL;
}
