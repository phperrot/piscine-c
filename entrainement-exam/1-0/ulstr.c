/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:25:40 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 13:41:24 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i] - 32 );
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i] + 32 );
		else
			ft_putchar(str[i]);
		i++;
	}
}
int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_ulstr(av[1]);
		return (0);
	}
	return (0);
}
