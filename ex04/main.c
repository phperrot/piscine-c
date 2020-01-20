/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:39:53 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/17 15:46:45 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <string.h>

int		ft_putchar(char c);

void	ft_putstr(char *str);

	char     *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "salut";
	char dest[] = "yell0ofejoi0";
	char dest1[] = "yell";
	char dest2[] = "yell0ofejoi0";
	unsigned int n=3;
	ft_putstr(strncpy(dest,src,n));
	ft_putchar('\n');
	ft_putstr(dest1);
	ft_putchar('\n');
	ft_putstr(ft_strncpy(dest2,src, n));

	return(0);

}

