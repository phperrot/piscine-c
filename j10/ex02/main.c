/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:28:06 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/18 17:52:22 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int		test_function(int i)
{
	return(i + 1);
}

int *ft_map(int *tab, int length, int(*f)(int));

int		main(void)
{
		int (*f)(int);
		int tab[5];
		int i = -1;
		
		tab[0] = 0;
		tab[1] = 1;
		tab[2] = 2;
		tab[3] = 3;
		tab[4] = 4;

		f = &test_function;
		ft_map(tab, 5, f);

		while (++i < 5)
			printf("%d", ft_map(tab, 5, f)[i]);
}
