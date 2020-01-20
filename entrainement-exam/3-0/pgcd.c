/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 09:42:48 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 10:08:23 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <xlocale.h>
#include <string.h>
#include <stdlib.h>

int		pgcd(char **argv)
{
	int a;
	int b;
	int r;

	a = (atoi(argv[1]) > atoi(argv[2]) ? atoi(argv[1]) : atoi(argv[2]));
	b = (a == atoi(argv[1]) ? atoi(argv[2]) : atoi(argv[1]));
	r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return (b);
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("\n");
		return (0);
	}
	else
	{
	printf("%d\n", pgcd(av));
	}
	return (0);
}
