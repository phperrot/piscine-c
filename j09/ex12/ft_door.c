/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:03:56 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/13 10:07:43 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define state door.state

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
   
	i = 0;
	while (str[i] != '\0')
	{	
		ft_putchar(str[i]);
		i++;
	}
}

ft_bool open_door(t_door *door)
{
	ft_putstr("Door opening...");
	state = OPEN;
	return (TRUE);
}

ft_bool close_door(t_door *door)
{
	ft_putstr("Door closing...");
	state = CLOSE;
	return (TRUE);
}

int is_door_open(t_door *door)
{
	ft_putstr("Door is open ?");
	return (door->state = OPEN);
}

int is_door_close(t_door *door)
{
	ft_putstr("Door is close ?") ;
	return (door->state = CLOSE)
}
