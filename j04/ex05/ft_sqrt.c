/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:49:34 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/10 14:06:15 by phperrot         ###   ########.fr       */
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
		return (0);
	}
}
