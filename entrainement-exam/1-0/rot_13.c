/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:41:49 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 14:05:28 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rot13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			(ft_putchar(((97 + ((str[i] - 97) + 13) % 26))));
		else if (str[i] >= 'A' && str[i] <= 'Z')
			(ft_putchar(((65 + ((str[i] - 65) + 13) % 26))));
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 1)
	{
		ft_rot13(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
