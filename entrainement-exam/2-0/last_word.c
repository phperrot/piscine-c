/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 09:13:25 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 09:35:10 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	last_word(char *str)
{
	int i;

	i = ft_strlen(str) - 1 ;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\t')
		i--;

	while (!(str[i] == ' ' || str[i] == '\v' || str[i] == '\t') && str[i] !='\0')
	{
		i--;
	}
	i++;
	while (!(str[i] == ' ' || str[i] == '\v' || str[i] == '\t') && str[i] !='\0')
	{
		ft_putchar(str[i]);
		i++;		
	}
}




int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar ('\n');
		return (0);
	}
	else 
	{
		(last_word(av[1]));
		ft_putchar('\n');
	}
}
