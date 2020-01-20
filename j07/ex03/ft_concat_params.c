/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:59:51 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 12:06:37 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			length(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*fill_string(char *str, int global_length, char **argv, int argc)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		if (k < global_length - 1)
			str[k] = '\n';
		k++;
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		global_length;
	char	*str;

	i = 0;
	global_length = 0;
	if (argc > 1)
	{
		while (i++ < argc - 1)
			global_length += length(argv[i]);
		global_length += argc;
		str = malloc(sizeof(*str) * (global_length + 1));
		str = fill_string(str, global_length, argv, argc);
		return (str);
	}
	return ("");
}
