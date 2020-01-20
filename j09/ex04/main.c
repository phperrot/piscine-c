/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:05:21 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/13 16:16:07 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char    *ft_rot42(char  *str);

int 	main(void)
{
	char str[]="Bonne et heureuse année 2018";
	ft_putstr(ft_rot42(str));
	return (1);
}
