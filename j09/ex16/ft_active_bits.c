/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:07:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/13 13:39:40 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
}

unsigned int	ft_active_bits(int nbr)
{
	int			nb_base;
	int			n;
	int			i;

	i = 0;
	nb_base = 2;
	n = 0;
	while (nbr / ft_recursive_power(nb_base, n) > 1)
	{
		n++;
	}
	while (n >= 0)
	{
		if (nbr / ft_recursive_power(nb_base, n) == 1)
			i++;
		nbr = nbr % ft_recursive_power(nb_base, n);
		n--;
	}
	return (i);
}
