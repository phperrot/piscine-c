/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:23:16 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/18 17:03:06 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char * ft_convert_base(char *nbr, char *base_from, char *base_to);
int convert_decimal(char *nbr, int basef_size);
int convert_baset(int nbr, char *base_to);
char *convert_basef_nbr(char *nbr, char *basefrom);
int 	main(void)
{
	int i = 0;
	while (i < 4)
	{
	//	printf("%c",ft_convert_base("5230","012345","01234")[i]);
		printf("%c",convert_basef_nbr("5320", "012345")[i]);
		i++;
	}
}
