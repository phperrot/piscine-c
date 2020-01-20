/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:24:21 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/22 10:46:31 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_header.h"

char* ft_read(void)
{
	char *tmp;
	int ret;
	int i;
	char ch;
	i = 0;
	tmp = malloc(sizeof(char *) * 1);	
	while  (ret = read(STDIN_FILENO, &ch, 1))
	{	
		tmp[i] = ch;
		i++;
	}
	tmp[i] = '\0';
	printf("%s", tmp);
	return (tmp);
}
/*
int	main(void)
{
	char *string;
	string = ft_read_size();
	return(1);
}*/
