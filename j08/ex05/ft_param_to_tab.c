/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 08:48:18 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 22:06:35 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include "stdlib.h"

int						ft_strlen(char *str)
{
	int					i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	*tab;

	i = -1;
	(void)ac;
	if (!(tab = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	while (av[i + 1] != '\0')
	{
		i++;
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = av[i];
		tab[i].tab = ft_split_whitespaces(av[i]);
	}
	tab[i + 1].str = 0;
	return (tab);
}
