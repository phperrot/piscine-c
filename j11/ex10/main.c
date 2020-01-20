/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:10:45 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 22:17:11 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>
int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int difference;
	int i;

	difference = 0;
	i = 0;
	while (difference == 0 && i <= ft_strlen(s1))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			difference = s1[i] - s2[i];
		}
	}
	return (difference);
}

void addition(void* nb)
{
	(printf("%d\n", *((int*)(nb + 8))));
}

void ft_list_push_front(t_list **begin_list, void *data);
void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int(*cmp)());
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
	int a;

	a = 9;

	list = ft_create_elem((int*)(5));
	ft_list_push_front(&list, (int*)8);
	ft_list_push_front(&list, (int*)7);
	ft_list_push_front(&list, (int*)9);
	ft_list_push_front(&list, (int*)4);
	ft_list_push_front(&list, (int*)3);
	ft_list_push_front(&list, (int*)71);
	print_list(list);
	printf("\n ----- \n");	
	(ft_list_foreach_if(list, &addition, &a, &strcmp));
	return (0);
}
