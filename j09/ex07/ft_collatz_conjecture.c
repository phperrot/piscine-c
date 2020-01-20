/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:13:56 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/13 14:27:25 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_count = 0;

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		g_count++;
		if (base % 2 == 0)
		{
			ft_collatz_conjecture(base / 2);
			return (g_count);
		}
		else
		{
			ft_collatz_conjecture(base * 3 + 1);
			return (g_count);
		}
	}
	return (g_count);
}
