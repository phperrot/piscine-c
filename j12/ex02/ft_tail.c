/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 13:30:41 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 20:58:11 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include "ft_header.h"
#define BUF_SIZE 1

int			g_init;
int			g_previous_line;
int			g_nb_files;

void		ft_several_files(int nb_files, char *filename, int j)
{
	(void)j;
	(void)nb_files;
	if (g_nb_files > 1)
	{
		ft_putstr("==> ");
		ft_putstr(filename);
		ft_putstr(" <==\n");
	}
}

int			ft_open(char *filename, int j)
{
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		if (j != g_init && g_previous_line == -1)
			ft_putchar('\n');
		ft_putstr("tail: ");
		ft_putstr(filename);
		ft_putstr(": No such file or directory");
	}
	if (fd != -1 && g_previous_line == -1)
		ft_putchar('\n');
	g_previous_line = fd;
	return (fd);
}

void		ft_display(int i, int nb_octets, char *output, char **argv)
{
	int		size;
	int		j;

	if (argv[2][0] == '+')
	{
		j = nb_octets - 1;
		while (output[j])
		{
			ft_putchar(output[j]);
			j++;
		}
	}
	else
	{
		size = i;
		i = size - nb_octets;
		while ((i >= size - nb_octets && i < size))
		{
			if (i >= 0)
				ft_putchar(output[i]);
			i++;
		}
	}
}

int			ft_read(int j, int nb_files, char **argv, int nb_octets)
{
	int		fd;
	char	*output;
	char	buf[BUF_SIZE + 1];
	int		ret;
	int		i;

	i = 0;
	fd = ft_open(argv[j], j);
	if (j != g_init && fd != -1)
		ft_putchar('\n');
	if (fd == -1)
		return (-1);
	ft_several_files(nb_files, argv[j], j);
	output = malloc(sizeof(char) * 1);
	while ((ret = (read(fd, buf, BUF_SIZE))))
	{
		output[i] = buf[0];
		i++;
		buf[ret] = '\0';
	}
	ft_display(i, nb_octets, output, argv);
	free(output);
	return (fd);
}

int			ft_tail(int nb_files, char **argv, int nb_octets, int j)
{
	int		fd;

	g_init = j;
	if (nb_octets < 0)
		nb_octets = -nb_octets;
	g_nb_files = nb_files - j;
	while (j < nb_files)
	{
		fd = ft_read(j, nb_files, argv, nb_octets);
		if (fd != -1 && close(fd) == -1)
		{
			ft_putstr("close() error");
			return (1);
		}
		j++;
	}
	if (g_previous_line == -1)
		ft_putchar('\n');
	return (0);
}
