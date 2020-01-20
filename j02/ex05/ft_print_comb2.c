/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 03:43:48 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/11 10:36:05 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	display(int i, int j, int k, int l)
{
	if (i * 10 + j < k * 10 + l && !(i == 9 && j == 8 && k == 9 && l == 9))
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
	int tableau1[2];
	int tableau2[2];

	tableau1[0] = 0;
	while (tableau1[0] <= 9)
	{
		tableau1[1] = 0;
		while (tableau1[1] <= 9)
		{
			tableau2[0] = 0;
			while (tableau2[0] <= 9)
			{
				tableau2[1] = 0;
				while (tableau2[1] <= 9)
				{
					display(tableau1[0], tableau1[1], tableau2[0], tableau2[1]);
					tableau2[1]++;
				}
				tableau2[0]++;
			}
			tableau1[1]++;
		}
		tableau1[0]++;
	}
}
