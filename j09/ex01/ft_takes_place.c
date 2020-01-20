/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:28:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/12 18:47:52 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*conv_char(int hour)
{
	if (hour < 12 | hour == 24)
	{
		return ("A.M.");
	}
	else
	{
		return ("P.M.");
	}
}

int		conv_nb(int hour)
{
	if (hour % 12 == 0)
	{
		hour = 12;
	}
	if (hour > 12)
	{
		(hour -= 12);
	}
	return (hour);
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
		conv_nb(hour), conv_char(hour), conv_nb(hour + 1), conv_char(hour + 1));
}
