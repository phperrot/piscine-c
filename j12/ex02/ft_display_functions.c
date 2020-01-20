/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:49:24 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 20:58:15 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
