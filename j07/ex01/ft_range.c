/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:19:11 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/18 20:53:51 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int len;
	int i;

	if (min >= max)
	{
		return (0);
	}
	else
	{
		len = max - min + 1;
		tab = malloc(sizeof(*tab) * (len + 1));
		i = 0;
		while (i < len - 1)
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
}
