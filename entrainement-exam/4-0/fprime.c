/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:14:34 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 10:50:25 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		g_global_multiplier = 1;

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 1)
		return (0);
	while (i < nb/2)
	{
		if (nb % i == 0)
			return (i);
		i++;
	}
	return (1);
}

void	fprime(int nb)
{
	if (ft_is_prime(nb)	> 1)
	{
//		printf("%d\n", nb);
		g_global_multiplier *= ft_is_prime(nb);
		printf("%d*", ft_is_prime(nb));
		fprime(nb / ft_is_prime(nb));
	}
}


int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("\n");
		return (0);
	}
	else
	{
		fprime(atoi(av[1]));	
		printf("%d\n", atoi(av[1])/g_global_multiplier);
	}

}
