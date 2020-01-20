/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 19:49:40 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/22 11:52:44 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			main(int ac, char **av)
{
	int		int1;
	int		int2;

	if (ac != 4)
		return (0);
	int1 = ft_atoi(av[1]);
	int2 = ft_atoi(av[3]);
	ft_symbol(av, int1, int2);
	return (0);
}
