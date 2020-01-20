/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:10:45 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 15:59:54 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_create_elem(void *data);
void ft_list_reverse(t_list **begin_list);
void ft_list_push_front(t_list **begin_list, void *data);
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
	
	list = ft_create_elem((int*)(5));
	ft_list_push_front(&list, (int*)8);
	ft_list_push_front(&list, (int*)9);
	ft_list_push_front(&list, (int*)4);
	ft_list_push_front(&list, (int*)3);
	ft_list_push_front(&list, (int*)71);
	print_list(list);
	printf("\n ----- \n");	
	ft_list_reverse(&list);
	print_list(list);
	return (0);
}
