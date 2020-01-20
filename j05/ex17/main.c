/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:01:12 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 12:03:50 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

int 	ft_putchar(char c);

void	ft_putstr(char *str);

char *ft_strncat(char *dest, char *src, int n);

int		main(void)
{
	char hi[] = "stuvwxyz";
	char dest[50] = "adjewio";
	int	 n = 3;
	/*	int i;
	
	i = -1;
	while (i++ < 10)
	{
		ft_putchar('0'-dest[i]);
		ft_putchar('\n');
	}
*/	ft_putstr(ft_strncat(dest, hi, n));
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr(strncat(dest, hi, n));
	return (0);
}
