# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phperrot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/09 22:10:34 by phperrot          #+#    #+#              #
#    Updated: 2018/07/10 14:13:07 by phperrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 
rm ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
