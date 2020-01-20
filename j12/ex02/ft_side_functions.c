/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_side_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:55:38 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 20:53:24 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			g_atoi_error = 0;

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
		i++;
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
	g_atoi_error = (i < ft_strlen(str)) ? 1 : 0;
	return (nb * sign);
}

int			ft_wrong_arg(char *str)
{
	if (g_atoi_error == 1)
	{
		ft_putstr("tail: illegal offset -- ");
		ft_putstr(str);
		ft_putchar('\n');
		return (0);
	}
	return (1);
}

void		ft_concised_arg(int ac, char **av)
{
	char	*str;
	int		i;

	if (!(str = malloc(sizeof(char) * ft_strlen(av[1]))))
		return ;
	i = 0;
	while (av[1][i + 2] != '\0')
	{
		str[i] = av[1][i + 2];
		i++;
	}
	str[i] = '\0';
	i = ft_atoi(str);
	if (ft_wrong_arg(str) == 0)
		return ;
	ft_tail(ac, av, ft_atoi(str), 2);
}

int			main(int ac, char **av)
{
	int		i;

	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ft_strlen(av[1]) > 2)
	{
		ft_concised_arg(ac, av);
	}
	else
	{
		i = ft_atoi(av[2]);
		if (ft_wrong_arg(av[2]) == 0)
			return (0);
		ft_tail(ac, av, ft_atoi(av[2]), 3);
	}
	return (0);
}
