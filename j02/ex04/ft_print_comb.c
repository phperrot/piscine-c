/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:56:53 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/08 12:18:23 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	display(char i, char j, char k)
{
	ft_putchar('0' + i);
	ft_putchar('0' + j);
	ft_putchar('0' + k);
	if (i == 7 && j == 8 && k == 9)
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				if (i != j && k != j && j != k)
				{
					display(i, j, k);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
