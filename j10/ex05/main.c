/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:43:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 16:32:29 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int addition(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
		return (5);
	else 
		return (0);
}

int	main(void)
{
	int tab[5]; 
	int (*f)(int, int);

	tab[0] = 4;
	tab[1] = 4;
	tab[2] = 4;
	tab[3] = 4;
	tab[4] = 4;
	f = addition; 
	printf("%d", ft_is_sort(tab, 5,f));

}

