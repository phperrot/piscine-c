/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:32:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/07 12:47:33 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void 	rush(int y, int x)
{
	int i=1;
	int j;

	while (i<=x)
	{
		j=1;
		while (j <= y)
		{
		if (i== 1 | i==x)
		{
			if (j == 1 | j == y)
			{
				ft_putchar('o');
			}
			else
			{
				ft_putchar('-');
			}
		}
		else
		{
			if (j==1 | j == y)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
		}

		j++;
		}
		ft_putchar('\n');
		i++;	
	}
}
