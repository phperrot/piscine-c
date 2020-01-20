/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:06:03 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/08 17:26:33 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c);

void ft_sort_integer_table(int *table, int size);


int		main(void)
{

	int i;
	i=0;
	
	int tab[8];
	
	tab[0]=9;
	tab[1]=1;
	tab[2]=5;
	tab[3]=0;
	tab[4]=4;
	tab[5]=7;
	tab[6]=2;
	tab[7]=8;
	ft_sort_integer_table(tab, 8);
	return (0);
}
