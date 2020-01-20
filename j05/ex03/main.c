/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:39:53 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/17 15:24:17 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <string.h>

int		ft_putchar(char c);

void	ft_putstr(char *str);

	char     *ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[] = "sal";
	char dest2[] = "bonjour";

	ft_putchar('+');

	ft_putstr(strcpy(dest2,src));
	ft_putchar('\n');
	ft_putchar('-');
	ft_putstr(ft_strcpy(dest2,src));

	return(0);

}

