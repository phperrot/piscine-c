/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:36:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/17 15:27:30 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int a;

	i = 0;
	a = 0;
	while (i <= ft_strlen(str) && a < ft_strlen(to_find))
	{
		if (str[i] == to_find[0])
		{
			a = 0;
			j = i;
			while (str[i + a] == to_find[a] && a < ft_strlen(to_find))
			{
				a++;
			}
		}
		if (a < ft_strlen(to_find))
			i++;
	}
	if (a == ft_strlen(to_find))
	{
		return (str + i);
	}
	return (0);
}
