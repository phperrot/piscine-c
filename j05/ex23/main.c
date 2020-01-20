/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:26:27 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/11 14:33:08 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	int a;
	void *addr;
	a = 3;
	addr = &a;
	ft_print_memory(addr, 5);
}
