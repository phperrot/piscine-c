/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:15:59 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 10:30:17 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int					exposant(int n)
{
	int				p;
	int				j;

	j = 0;
	p = 1;
	if (n == 0 | n == 1)
	{
		return (1);
	}
	else
	{
		while (n / p > 1)
		{
			p = p * 10;
			j++;
		}
		return (j);
	}
}

int					ft_putchar(char c);

unsigned int		exceptions(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	else
	{
		n = nb;
	}
	return (n);
}

int					ft_puttens(unsigned int n)
{
	int				j;
	int				p;

	j = 0;
	p = 1;
	if (n > 9)
	{
		while (n / p >= 10)
		{
			p = p * 10;
//			printf("p= %d \n", p);
//			printf("n/p= %d \n", n/p);
		}
//		printf("#### %d ####", exposant(p));
		ft_putchar('0' + n / p);
		n = n % p;
		while (j++ < (exposant(p) - exposant(n) - 1))
		{
			ft_putchar('0');
		}
		ft_puttens(n);
		return (0);
	}
	else
	{
		ft_putchar('0' + n);
		return (n);
	}
}

void				ft_putnbr(int nb)
{
	unsigned int	n;

	n = exceptions(nb);
	n = ft_puttens(n);
}
