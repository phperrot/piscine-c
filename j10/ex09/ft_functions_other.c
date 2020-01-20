/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions_other.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:16:44 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/22 11:53:15 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "ft_opp.h"

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		difference;
	int		i;

	difference = 0;
	i = 0;
	while (difference == 0 && i <= ft_strlen(s1))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			difference = s1[i] - s2[i];
		}
	}
	return (difference);
}

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

void		ft_usage(int int1, int int2)
{
	(void)int1;
	(void)int2;
	ft_putstr("error : only [ + - * / % ] are accepted.\n");
}

void		ft_symbol(char **av, int int1, int int2)
{
	int		i;
	void	(*fct)(int, int);

	i = -1;
	while (i <= 4 && ft_strcmp(g_opptab[i].str, av[2]) != 0)
		i++;
	fct = g_opptab[i].f;
	(*fct)(int1, int2);
}
