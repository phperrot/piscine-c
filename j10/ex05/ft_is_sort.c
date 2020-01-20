/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:14:22 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 16:24:56 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sens;

	i = 0;
	if (length == 0)
		return (0);
	if (length == 1)
		return (1);
	sens = f(tab[0], tab[1]);
	printf("%d", sens);
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) != 0 && f(tab[i], tab[i + 1]) != sens)
			return (0);
		i++;
	}
	return (1);
}
