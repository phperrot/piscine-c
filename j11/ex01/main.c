/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:10:45 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 15:42:38 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
void ft_list_push_back(t_list **begin_list, void *data);

void 	print_list(t_list *list)
{
	t_list *tmp;
	
	tmp = list;
	while (tmp)
	{
		printf("%d\n", (int)(tmp->data));
		tmp = tmp->next;
	}
}

int		main(void)
{
	t_list *list;
	list = 0;	
//	list = ft_create_elem((int*)(5));
//	free(list);
	ft_list_push_back(&list, (int*)8);
	ft_list_push_back(&list, (int*)7);
	ft_list_push_back(&list, (int*)10);
	ft_list_push_back(&list, (int*)95);
	ft_list_push_back(&list, (int*)300);
	print_list(list);
	return (0);
}
