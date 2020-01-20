/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:39:53 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 11:40:05 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char src[] = "y ell";
	char dest[] = "yell 1";;
	unsigned int n;
	n = 68;

	printf("%d \n", strncmp(src,dest, n));
	printf("%d \n", ft_strncmp(src, dest, n));

	return(0);

}
