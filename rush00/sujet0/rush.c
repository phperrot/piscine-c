/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:32:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/08 21:36:29 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		rush(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 || i == y) && (j == 1 || j == x))
				ft_putchar('o');
			else if ((i > 1 && i < y) && (j == 1 || j == x))
				ft_putchar('|');
			else if ((j > 1 && j < x) && (i == 1 || i == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		if (y != 0)
			ft_putchar('\n');
		i++;
	}
}
