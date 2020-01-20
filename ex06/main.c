/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:39:53 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 11:37:50 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_putchar(char c);

void	ft_putstr(char *str);

int ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char src[] = "yell";
	char dest[] = "yell 1";;

	printf("%d \n", strcmp(src,dest));

	printf("%d \n", ft_strcmp(src, dest));

	return(0);

}

