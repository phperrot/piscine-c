/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:50:20 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 20:58:13 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef __FT_HEADER_H
#	define __FT_HEADER_H

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#define BUF_SIZE 1

int			ft_strlen(char *str);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_atoi(char *str);
void		ft_several_files(int ac, char *filename, int j);
int			ft_open(char *filename, int j);
void		ft_display(int i, int nb_octets, char *output, char **argv);
int			ft_read(int j, int argc, char **argv, int nb_octets);
int			ft_tail(int nb_files, char **argv, int nb_octets, int j);
int			ft_wrong_arg(char *str);
void		ft_concised_arg(int ac, char **av);
int			main(int ac, char **av);

#	endif
