/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 03:43:48 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/05 04:49:57 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c);

void display(int i, int j, int k, int l)
{
	if (i*10 + j < k*10 + l && i+j+k+l < 35)
	 /*if (k != i && l != j)*/
	{
	ft_putchar('0' + i);
	ft_putchar('0' + j);
	ft_putchar(' ');
	ft_putchar('0' + k);
	ft_putchar('0' + l);
	ft_putchar(',');
	ft_putchar(' ');
	}

	if (i == 9 && j == 8 && k == 9 && l == 9)
	{
	ft_putchar('0' + i);
	ft_putchar('0' + j);
	ft_putchar(' ');
	ft_putchar('0' + k);
	ft_putchar('0' + l);
	}
}


void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i=0;
	while (i <= 9)
	{	
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				l = 0;
				while (l <=9)
				{
				display( i, j, k, l);
				l++;
				}
				k++;
			};
			j++;
		}
		i++;	
	}
}
