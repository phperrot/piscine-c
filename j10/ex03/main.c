/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:28:06 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/22 11:17:00 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		test_function(char *str)
{
	if (strcmp(str, "bon") == 0)
		return(1);
	else 
		return (0);
}

int ft_any(char **tab, int(*f)(char*));

int		main(void)
{
		int (*f)(char*);
		char *tab[5];
		
		tab[0] = "a";
		tab[1] = "bn";
		tab[2] = "jeam";
		tab[3] = "bon";
		tab[4] = 0;

		f = &test_function;

		printf("%d", ft_any(tab, f));
}
