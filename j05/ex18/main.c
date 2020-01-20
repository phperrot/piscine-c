/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:01:12 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/12 11:09:38 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

int 	ft_putchar(char c);

void	ft_putstr(char *str);

char *ft_strcat(char *dest, char *src);

int		main(void)
{
	char hi[] = "ssu";
	char dest[50] = "adjewio";
/*	int i;
	
	i = -1;
	while (i++ < 10)
	{
		ft_putchar('0'-dest[i]);
		ft_putchar('\n');
	}
*/	ft_putstr(ft_strcat(dest, hi));
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr(strcat(dest, hi));
	return (0);
}
