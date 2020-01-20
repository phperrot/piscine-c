/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:04:31 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/10 14:04:22 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int resultat;

	i = 1;
	resultat = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (i <= nb)
		{
			resultat = resultat * i;
			i++;
		}
		return (resultat);
	}
	else
	{
		return (0);
	}
}
