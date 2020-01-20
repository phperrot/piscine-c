/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 19:49:40 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/22 11:38:08 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			ft_atoi(char *str)
{
	int		nb;
	int		sign;
	int		i;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\n' | str[i] == '\r' | str[i] == '\t'
			| str[i] == '\f' | str[i] == '\v' | str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while ((str[i] - '0') >= 0 && ('9' - str[i]) >= 0)
	{
		nb = (nb * 10 + (str[i] - '0'));
		i++;
	}
	return (nb * sign);
}

void		ft_symbol(char **av, int int1, int int2)
{
	char	operations_symb[5];
	void	(*operations_fct[5])(int, int);
	void	(*f)(int, int);
	int		i;

	operations_symb[0] = '+';
	operations_symb[1] = '-';
	operations_symb[2] = '*';
	operations_symb[3] = '/';
	operations_symb[4] = '%';
	operations_fct[0] = &ft_addition;
	operations_fct[1] = &ft_substraction;
	operations_fct[2] = &ft_multiplication;
	operations_fct[3] = &ft_division;
	operations_fct[4] = &ft_modulo;
	i = -1;
	while (i <= 4 && operations_symb[i] != av[2][0])
		i++;
	if (i == 5)
		ft_putstr("0\n");
	else
	{
		f = operations_fct[i];
		(*f)(int1, int2);
	}
}

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
