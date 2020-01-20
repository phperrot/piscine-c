/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:04:14 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/10 17:32:54 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int 	ft_find_next_prime(int nb);
int		main(void)
{
	printf("%d", ft_find_next_prime(16));
	return(0);
}
