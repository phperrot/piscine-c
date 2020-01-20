/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 19:25:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 11:42:53 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	 ft_putchar(char c);
void ft_putstr(char *str);
char *ft_strlowcase(char *str);

int	main(void)
{
	char str[]="SALUT CA VA?";	
	ft_putstr(ft_strlowcase(str));
	return (0);

}
