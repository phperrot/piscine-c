/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 09:53:30 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 14:03:54 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr_positive(unsigned int nb)
{
	if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr_positive(nb/10);
		ft_putchar('0' + nb% 10);
	}
}


int	main(void)
{
	ft_putnbr_positive(900000);
	return (0);
}
