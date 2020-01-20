/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:12:00 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/08 15:24:34 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		leng(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		powerten(int power)
{
	int tens;
	int j;
	
	tens = 1;
	j = 0;
	while (j < power)
	{   
		tens = tens * 10;
		j++;
	}
	return (tens);
}

int 	ft_minus(int minus, int number)
{
	int j;

	j = 0;
	while (j++ < minus) 
	{
		number = number * -1;
	}
	return(number);
}

int		ft_atoi(char *str)
{
	int j;
	int len;
	int cardinal;
	int number_stockage;
	int number;
	int tens;
	int int_already_printed;
	int minus;

	int_already_printed = 0;
	len = leng(str);
	number = 0;
	number_stockage = 0;
	j = 0;
	tens = powerten(len - 1);
	minus = 0;
	while (j <= len)
	{
		cardinal= str[j]-'0';
		if (cardinal >= 0 && cardinal <= 9)
		{
			number_stockage = number_stockage + cardinal * tens;
			printf("%ld \n", number_stockage);
			int_already_printed++;
		}
		if (cardinal == -3)
		{
			minus = minus + 1;
		}
		if ((cardinal < 0 | cardinal > 9) && int_already_printed  > 0)
		{
			number_stockage = number_stockage / (powerten(len - j));
			j= len;
		}
		tens = tens / 10;
	j ++;
	}
	number = number_stockage;
	return(number);
	/*return (ft_minus(minus, number));*/
}
