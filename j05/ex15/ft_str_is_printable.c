/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 23:02:47 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 11:53:41 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int is_printable;

	i = 0;
	is_printable = 1;
	while (str[i] != '\0')
	{
		if ((str[i] <= 31 | str[i] >= 127))
		{
			is_printable = 0;
		}
		i++;
	}
	return (is_printable);
}
