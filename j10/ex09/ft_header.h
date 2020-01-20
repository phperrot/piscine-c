/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:08:31 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/21 09:37:32 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		ifndef __FT_HEADER_H
#		define __FT_HEADER_H

#		include <unistd.h>

typedef struct s_struct	t_opp;
struct	s_struct
{
	char *str;
	void (*f)(int, int);
};

void	ft_add(int int1, int int2);
void	ft_sub(int int1, int int2);
void	ft_mul(int int1, int int2);
void	ft_div(int int1, int int2);
void	ft_mod(int int1, int int2);
void	ft_usage(int int1, int int2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_size(unsigned int nb, int *p);
int		ft_negative(int nb);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_symbol(char **av, int int1, int int2);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		main(int ac, char **av);

#		endif
