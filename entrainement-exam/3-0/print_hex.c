/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:49:21 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 15:56:56 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_print_hex(int nb)
{
	char *base;

	base = "0123456789abcdef";
	if (nb > 16)
	{
		ft_print_hex(nb/16);
		ft_putchar(base[nb % 16]);
	}
	else
	{
		ft_putchar(base[nb]);
	}
	return (0);
}
int		ft_atoi(char *str)
{
	int res;
	int i;
	int sign;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\f' ||\
				   	str[i] == '\v' || str[i] == '\t' || str[i] == '\r'))
		i++;

	if (str[i] == '+' && str[i+1] != '-')
		i++;
	if (str[i] == '-')
		sign = -1;
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;	
		res += (str[i] - '0');
		i++;	
	}
	printf("%d", res);
	return (res * sign);

}
int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_print_hex(ft_atoi(av[1]));
	}
	ft_putchar ('\n');
	return (0);
}
