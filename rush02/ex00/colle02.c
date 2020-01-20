/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:47:50 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/22 14:59:38 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		colle02(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1) && (j == 1 || j == x))
				ft_putchar('A');
			else if ((i == y) && (j == 1 || j == x))
				ft_putchar('C');
			else if ((i > 1 && i < y) && (j == 1 || j == x))
				ft_putchar('B');
			else if ((j > 1 && j < x) && (i == 1 || i == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		if (y > 0)
			ft_putchar('\n');
	}
}
