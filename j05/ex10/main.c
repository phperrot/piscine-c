/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 19:25:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/10 16:13:33 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	 ft_putchar(char c);
void ft_putstr(char *str);
char *ft_strcapitalize(char *str);

int	main(void)
{
	char str[]="sA LUT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";	
	ft_putstr(ft_strcapitalize(str));
	return (0);
}
