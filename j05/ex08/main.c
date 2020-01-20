/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 19:25:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 11:41:46 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	 ft_putchar(char c);
void ft_putstr(char *str);
char *ft_strupcase(char *str);

int	main(void)
{
	char str[]="salut, ca va?";	
	ft_putstr(ft_strupcase(str));
	return (0);

}
