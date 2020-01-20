/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 08:57:14 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 23:14:48 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int powerten(int power)
{
	int i;
	int res;
	if (power < 0)
		return (0);
	res = 1;
	i = -1;
	while (++i<power)
		res *= 10;
	return (res);
}

int	ft_incr_check(int size)
{
	int i;
	int tmp;
	int nb;
	i = -1;
	tmp = -1;
	nb = powerten(size - 2);
	while (++i <= size)
	{
//		printf("%d", i);
//		printf("\nnbr / powerten = %d\n", nbr/powerten(size -i)); 
//		printf("tmp = %d\n\n", tmp);
		if (nb / powerten(size - i) <= tmp)
			return 0;
		if (nb / powerten(size - i) > size - i)
			nb += powerten(size - i); // nouveautes
		tmp = nb / powerten(size - i); 
		nb = nb % powerten(size - i);
	}
	return(1);
}

void ft_print_combn(int n)
{
	int *nb;
	int a;
	int size;
	
	size = n;
	a = powerten(size - 2);
	nb = &a;
	printf("FROM %d\n", powerten(size-2));
	printf("TOOM %d\n\n", powerten(size));

	while (*nb < powerten(size))
	{
		//veriication avant afficahge
		if (*nb < powerten(size - 1))
				if (ft_incr_check(size - 1))
					printf("0%d, ", *nb);
		if (ft_incr_check(size))
		{
			printf("%d, ", *nb);
		}
		*nb++;
	}
}


int main(void)
{
//	printf("%d", ft_incr_check(1230, 4));
	ft_print_combn(8);
	return (0);
}

