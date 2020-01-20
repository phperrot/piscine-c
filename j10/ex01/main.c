/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:28:06 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/22 13:54:30 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void		test_function(int i)
{
	printf("%d", i);
}

void	ft_foreach(int *tab, int length, void(*f)(int));

int		main(void)
{
		void (*f)(int);
		int tab[5];

		tab[0] = 0;
		tab[1] = 1;
		tab[2] = 2;
		tab[3] = 3;
		tab[4] = 4;

		f = &test_function;
		ft_foreach(tab, 5, f);
}
