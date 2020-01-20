/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:10:45 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 11:49:58 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_push_params(int ac, char **av);
void 	print_list(t_list *list)
{
	t_list *tmp;
	
	tmp = list;
	while (tmp)
	{
		printf("%s\n", (char*)(tmp->data));
		tmp = tmp->next;
	}
}

int		main(int ac, char **av)
{
	t_list *list;
	
	list = ft_list_push_params(ac, av);
	
	print_list(list);
	return (0);
}
