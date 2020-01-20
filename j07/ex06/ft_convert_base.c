/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:50:33 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/18 17:03:05 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			g_size_nbr;

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

int			power(int n, int puissance)
{
	int		i;
	int		res;

	i = 0;
	res = 1;
	if (puissance == 0)
		return (res);
	while (i < puissance)
	{
		res = res * n;
		i++;
	}
	return (res);
}

int			convert_decimal(char *nbr, int basef_size)
{
	int		i;
	int		decimal;

	i = -1;
	decimal = 0;
	while (i++ < ft_strlen(nbr) - 1)
	{
		decimal += (nbr[i] - '0') * power(basef_size, ft_strlen(nbr) - i - 1);
	}
	return (decimal);
}
char 		*convert_basef_nbr(char *nbr, char *basefrom)
{
	int size_nbr;
	int size_base;
	int i;
	int j;
	size_nbr = ft_strlen(nbr);
	size_base = ft_strlen(basefrom);
	i = 0;
	printf("je suis ici, %c", nbr[3]);
		while (nbr[i] != '\0')
		{
			j = 0;
			while (j < size_base && nbr[i] != basefrom[j])
			{
				j++;
			}
			nbr[3] = '0';
		i++;
		}
	return (nbr);	
}
int			convert_baset(int nbr, char *base_to)
{
	int		baset_size;
	int		nbr_nb;
	int		j;
	int		i;

	i = 0;
	j = 0;
	baset_size = ft_strlen(base_to);
	nbr_nb = 0;
	while (nbr / power(baset_size, i) > baset_size)
	{
		i++;
	}
	while (j <= i + 1)
	{
		nbr_nb = nbr_nb * 10 + nbr / power(baset_size, i - j + 1);
		nbr = nbr % power(baset_size, i - j + 1);
		j++;
	}
	g_size_nbr = i + 1;
	return (nbr_nb);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		basef_size;
	int		nb;
	char	*tab;
	int		i;

	i = 0;
	g_size_nbr = 0;
	basef_size = ft_strlen(base_from);
	nb = convert_decimal(nbr, basef_size);
	nb = convert_baset(nb, base_to);
	if (!(tab = (char *)malloc(sizeof(*tab) * (g_size_nbr + 1))))
		return (NULL);
	while (i < g_size_nbr)
	{
		tab[i] = base_to[(nb / power(10, g_size_nbr - i - 1))];
		nb = nb % power(10, g_size_nbr - i - 1);
		i++;
	}
	return (tab);
}
