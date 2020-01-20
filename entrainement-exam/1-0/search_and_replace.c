/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 08:47:09 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 09:12:19 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char*str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);	
}

void	ft_putchar(char c)
{
	
	write (1, &c, 1);
}

void	search_and_replace(char *str, char *old, char *new)
{
	int i;

	i = 0;
	if (ft_strlen(old) == 1 && ft_strlen(new) == 1)
	{
		while (str[i])
		{
			if (str[i] == old[0])
			{
				str[i] = new[0];
			}
			ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar ('\n');
}

int		main(int ac, char **argv)
{
	if (ac != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		search_and_replace(argv[1], argv[2], argv[3]);
	}
	return (0);
}

