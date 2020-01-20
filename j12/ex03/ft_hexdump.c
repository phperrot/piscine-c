/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:14:55 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 23:34:44 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#define BUF_SIZE 1
#include <stdio.h>
#include <string.h>
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\n' | str[i] == '\r' | str[i] == '\t'
			| str[i] == '\f' | str[i] == '\v' | str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while ((str[i] - '0') >= 0 && ('9' - str[i]) >= 0)
	{
		nb = (nb * 10 + (str[i] - '0'));
		i++;
	}
	return (nb * sign);
}

void	ft_putnbr_base(int nbr, char *base);

int ft_read(char *file)
{
	int fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		i;
	int		j;
	int		size;
	char	*output;
	char	*prev_line;
	char	*cur_line;
		i = 0;
		fd = open(file, O_RDONLY);
		if (fd == -1)
		{
			ft_putstr(": No such file or directory\n");
			return (1);
		}
	//	if (!(output = malloc(sizeof(char) * 1)))
	//		return (0);
		output = malloc(sizeof(char) * 1);
		while ((ret = (read(fd, buf, BUF_SIZE))))
		{
			output[i] = buf[0];
			i++;
			buf[ret] = '\0';
		}
			output[i] = '\0';
		size = 0;
		close(fd);
		fd = open(file, O_RDONLY);
		prev_line = malloc(sizeof(char) * 16 + 1);
//		if (!(prev_line = malloc(sizeof(char) * 16 + 1)))
//			return (0);
		cur_line = malloc(sizeof(char) * 16 + 1);
//		if (!(cur_line = malloc(sizeof(char) * 16 + 1)))
//			return (0);

		while ((size < i))
		{
//			if (size % 16 != 0)
//				ft_putstr("   ");
			if (strcmp(cur_line, prev_line) && size % 16 == 0)
				printf("\n @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n");
			cur_line[size % 16] = output[size];
			if (size != 0 && size % 16 == 0)
			{
				ft_putchar('\n');
				prev_line = cur_line;
			}
			if (size % 16 == 0)
			{
				ft_putnbr_base(size, "0123456789abcdef");
			}
			if (output[size] == '\n')
			{
				ft_putstr("  ");
				(ft_putstr("\\n"));
			}
			else if (output[size] == '\t')
			{
				ft_putstr("  ");
				(ft_putstr("\\t"));
			}
			else if (output[size] == '\v')
			{
				ft_putstr("  ");
				(ft_putstr("\\v"));
			}
			else if (output[size] == '\f')
			{
				ft_putstr("  ");
				(ft_putstr("\\f"));
			}
			else if (output[size] == '\r')
			{
				ft_putstr("  ");
				(ft_putstr("\\r"));
			}
			else
			{
				ft_putstr("   ");
				ft_putchar(output[size]);
			}
			size++;
			j = 0;
			while (j < 16)
			{
				prev_line[j] = cur_line[j];
				j ++;
			}

		}
		i = size + 1;
	   	while (i % 16 != 0)
		{
			ft_putstr("    ");
			i++;
		}
		ft_putstr("    \n");
		ft_putnbr_base(size, "0123456789abcdef");
		ft_putchar('\n');
		if (close(fd) == -1)
		{
			ft_putstr("close() error");
			return (1);
		}
//		free(output);
	return (0);
}

int	main(int ac, char ** av)
{
	if (ac == 1)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	ft_read(av[1]);
	return (0);
}
