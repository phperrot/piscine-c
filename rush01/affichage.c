/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 15:20:03 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/14 15:44:58 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int **grille)
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			ft_putchar('0' + grille[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
