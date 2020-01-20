/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 10:31:19 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 15:24:32 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_putchar(char c);

int					ft_size(unsigned int nb, int *p)
{
	int				i;

	*p = 1;
	i = 0;
	if (nb == 0)
		return (1);
	while (nb / *p >= 10)
	{
		*p *= 10;
		i++;
	}
	return (i);
}

int					ft_negative(int nb)
{
	unsigned		n;

	if (nb < 0)
	{
		n = nb * -1;
		ft_putchar('-');
	}
	return (nb);
}

void				ft_putnbr(int nb)
{
	int				size;
	int				i;
	int				*p;
	unsigned int	n;
	int				a;

	a = 1;
	p = &a;
	n = ft_negative(nb);
	size = ft_size(n, p);
	i = 0;
	while (i <= size)
	{
		ft_putchar('0' + n / *p);
		n = n % *p;
		i++;
		*p = *p / 10;
	}
}
