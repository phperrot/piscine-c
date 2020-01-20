/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:02:56 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/05 14:33:46 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int 	n;

	if (nb < 0)
	{
		fput_char("-");
		n = nb - 1;
	}
	else
	{
		n = nb;
	}


	if ( n >= 10)
	{
		ft_putchar(floor(n / 10]);
		ft_putchar (n % 10);
	}
}
