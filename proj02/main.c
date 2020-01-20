/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 16:17:23 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/21 22:39:13 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_header.h"


int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int g_result = 0;

int eval_expr(char *str)
{
	int i;
	int j;
	int k;
	int size;
	char *tab;

	i = 0;
	j = 0;
	size = ft_strlen(str);
	while (str[i] != '(' && str[i] != '\0')
		i++;
	while (str[size - j] != ')')
		j++;	
	if (!(tab = malloc(sizeof(char) * (size - j - i - 2 + 1)))) //-2 car (-(j+1) et -(i+1) (pour resserrer)
		return (0);
	k = 0;
	while (k + i < size - j - 2 + 1)
	{
		tab[k] = str[k + i + 1];
		k++;
	}
	tab[k] = '\0';
	if (ft_strlen(tab) > 1)
		eval_expr(tab);
	printf("%s\n", tab);

	return (0);
}

int main(int argc, char **argv)
{
	(void)argc;
	eval_expr(argv[1]);
	return (0);
}
