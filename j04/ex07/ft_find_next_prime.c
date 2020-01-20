/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:26:37 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/10 13:59:20 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int racine;
	int resultat;

	racine = 0;
	resultat = 0;
	while (racine <= (nb / 2) && racine <= 46341 && resultat == 0)
	{
		if (racine * racine == nb)
		{
			resultat = 1;
		}
		racine = racine + 1;
	}
	if (resultat == 1)
	{
		return (racine - 1);
	}
	else
	{
		return (nb / 2);
	}
}

int		ft_is_prime(int nb)
{
	int i;
	int racine;
	int premier;

	i = 1;
	racine = ft_sqrt(nb);
	premier = 1;
	if (nb <= 1)
	{
		premier = 0;
	}
	while (i++ <= racine && premier == 1)
	{
		if (nb % i == 0)
		{
			premier = 0;
		}
	}
	if (nb == 2)
	{
		premier = 1;
	}
	return (premier);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
