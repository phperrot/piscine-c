/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 11:49:57 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 11:55:07 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

	i = 0;

	while (i < 26)
	{
		if (i % 2 != 0)
			ft_putchar(65 + i);
		else 
			ft_putchar(65 + 32 +i);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
