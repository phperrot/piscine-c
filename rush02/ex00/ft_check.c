/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:36:28 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/22 10:44:08 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "stdio.h"


int check_colle03(int x, int y, char *tab)
{
	int		i;
	int		j;

	i = 0;

	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 || i == y) && (j == 1))
			{
				if(!(tab[(i-1) * (x+1) + j -1] == 'A'))
					return (0);
			}
			else if ((i == 1 || i == y) && (j == x))
			{
				if(!(tab[(i-1) * (x+1) + j -1] == 'C'))
					return (0);
			}
			else if ((i > 1 && i < y) && (j == 1 || j == x))
			{
				if	(!(tab[(i-1) * (x+1) + j - 1] == 'B'))
					return (0);
			}
			else if ((j > 1 && j < x) && (i == 1 || i == y))
			{
				if (!(tab[(i-1) * (x+1) + j - 1] == 'B'))
					return  (0);
			}
			else 
			{
				if (!(tab[(i-1) * (x+1) + j - 1] == ' '))
					return (0);
			}
		}
		if ((y > 0) && (j > x))
				if (!(tab[(i-1)*(x+1) + j - 1] == '\n'))
					return (0);
	}
	return (1);
}


int	get_rows(char *input)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '\n')
			j++;
		i++;
	}
	return (j);
}

int get_cols(char *input)
{
	int i;

	i = 0;
	while (input[i] != '\n')
		i++;
	return (i);
}

int	main(void)
{
	char *output;

	output = ft_read();

	printf("%d", check_colle03(get_cols(output), get_rows(output), output));

	//		printf("%d -- ", get_cols(output));
	//		printf("%d",	get_rows(output));
	return (0);
}
