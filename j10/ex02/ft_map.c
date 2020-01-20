/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:42:45 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/18 17:52:20 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_r;

	if (!(tab_r = malloc(sizeof(int) * length)))
		return (0);
	i = -1;
	while (++i < length)
		tab_r[i] = f(tab[i]);
	return (tab_r);
}
