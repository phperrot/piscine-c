/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:08:31 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 17:36:37 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		ifndef __FT_HEADER_H
#		define __FT_HEADER_H

#		include <unistd.h>

void	ft_addition(int int1, int int2);
void	ft_substraction(int int1, int int2);
void	ft_multiplication(int int1, int int2);
void	ft_division(int int1, int int2);
void	ft_modulo (int int1, int int2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_size(unsigned int nb, int *p);
int		ft_negative(int nb);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_symbol(char **av, int int1, int int2);
int		main(int ac, char **av);

#		endif
