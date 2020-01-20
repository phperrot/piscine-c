/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:35:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/10 14:05:13 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_resultat = 1;

int		ft_recursive_factorial(int nb)
{
	if (nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 0 && nb <= 12)
	{
		g_resultat = nb * ft_recursive_factorial(nb - 1);
		return (g_resultat);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (0);
}
