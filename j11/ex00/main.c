/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:44:53 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/20 11:48:45 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

int	main(void)
{
	printf("%s", ft_create_elem("hi")->data);
	return (0);
}
