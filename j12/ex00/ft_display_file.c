/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 13:30:41 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 17:26:22 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#define BUF_SIZE 1

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_read(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	while (ret = (read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}

int			main(int ac, char **av)
{
	if (ac > 2)
	{
		ft_putstr("Too many arguments.");
		return (0);
	}
	if (ac == 0)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	ft_read(av[1]);
	return (0);
}
