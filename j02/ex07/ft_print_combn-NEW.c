/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn-NEW.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 23:17:44 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 23:44:12 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);


void ft_display(int n, int *tab)
{
	int i;

	i = 10 - n - 1;
	while (i < 10)
	{
		ft_putchar('0' + tab[i]);
		i++;
	}
}

int	*increment(int *tab, int column)
{
	if (i > (10 - n))
	{
		if (tab[i] > 9)
		{
			tab[i - 1]++;
			tab[i] = 0;
			increment(tab, i--);
		}
	}
	return (tab);
}

void ft_print_combn(int n)
{
	int *tab;

	i
}

