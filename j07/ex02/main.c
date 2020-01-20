/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:25:59 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 10:09:07 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max);

int 	main(void)
{
	int *a;
	int i;
	int max;
	int min;

	max = 2147483647;
	min = (-211147483648);
		
	printf("%d\n", ft_ultimate_range(&a, min, max));
//	i = -1;
	
//	while (++i < max - min)
//	{
//		printf("%d", a[i]);
//	}	

	return(0);
}
