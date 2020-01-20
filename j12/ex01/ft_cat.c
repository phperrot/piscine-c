/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 17:30:34 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 21:00:07 by phperrot         ###   ########.fr       */
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
		ft_putstr("cat: ");
		ft_putstr(file);
		ft_putstr(": No such file or directory\n");
		return (1);
	}
	while ((ret = (read(fd, buf, BUF_SIZE))))
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

void		ft_cat(int ac, char **av)
{
	int i;

	i = 0;
	while (i++ < ac - 1)
	{
		ft_read(av[i]);
	}
}

int			main(int ac, char **av)
{
	if (ac == 0)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	ft_cat(ac, av);
	return (0);
}
