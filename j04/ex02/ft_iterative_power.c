/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:15:19 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/10 12:01:00 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;
	int	j;

	j = 1;
	if (power < 0)
	{
		return (0);
	}
	else
	{
		resultat = 1;
		while (j <= power)
		{
			resultat = resultat * nb;
			j++;
		}
		return (resultat);
	}
}
