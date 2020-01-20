/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:06:03 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 20:27:14 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     leng(char *str);

int ft_atoi(char *str);

int		main(void)
{
	char str[]="        +-08$";

	printf("\n \n  %d \n \n", ft_atoi(str));
	printf("\n \n  %d \n \n", atoi(str));
	return (0);
}
