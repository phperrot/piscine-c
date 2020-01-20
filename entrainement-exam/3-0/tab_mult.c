/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 17:21:53 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 17:44:45 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-' && str[i + 1] != '+')	
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		i++;
	}

}

int		main(int ac, char **ac)
{
	if (ac == 2)
	{
		ft_multab(ac[1]);
	}
	ft_putchar('\n');
	return (0);
}
