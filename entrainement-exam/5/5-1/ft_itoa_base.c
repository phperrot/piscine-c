/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 11:04:02 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 11:48:49 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.c>

int		ft_strlen(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (str[0] == '+' | str[0] == '-')
		i++;
	while (str[i] != '\0')
		j++;
	return (j)
}

char *ft_itoa(char *str)
{
	char *tab;
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(tab = malloc (sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	
	if (str[0] == '+' | str[0] == '-')
		i++;
	while (str[i])
	{
		tab[j] = str[i];
		j++;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("\n");
		return (0);
	}
	else
	{
		ft_itoa(av[1]);
	}
}
