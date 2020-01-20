/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 12:54:22 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 13:22:30 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
}
	
void	ft_repeat(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 0;
			while (j < (str[i] - 64))
			{
				ft_putchar(str[i]);
				j++;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 0;
			while (j < (str[i] - 96))
			{
				ft_putchar(str[i]);
				j++;
			}
		}
		else 
			ft_putchar(str[i]);
		i++;
	}
}

int 	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_repeat(av[1]);
		return (0);
	}
	return (0);
}
