/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:13:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/13 16:44:40 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)

{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

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

int		ft_strcmp(char *s1, char *s2)
{
	int difference;
	int i;

	difference = 0;
	i = 0;
	while (difference == 0 && i <= ft_strlen(s1))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			difference = s1[i] - s2[i];
		}
	}
	return (difference);
}

void 	ft_ultimate_fight(t_perso *offender, t_perso *defender, char *attack)
{
	if (!(offender->life <= 0 | defender->life <= 0))
	{
		if ((ft_strcmp(attack,"kick") == 0))
			defender->life = defender-> life - 15;
		if ((ft_strcmp(attack, "punch") == 0))
			defender->life -= 5;
		if ((ft_strcmp(attack,"headbutt")))
			defender->life -= 20;	
		if ((ft_strcmp(attack,"chop ichi")==0))	
			defender->life -= 20;
		if ((ft_strcmp(attack,"chop ni")==0))
			defender->life -= 3;
		if ((ft_strcmp(attack,"chop san")==0))
			defender->life -= 18;
		if ((ft_strcmp(attack,"chop shi")==0))
			defender->life -= 9;
		if ((ft_strcmp(attack,"chop go")==0))
			defender->life -= 11;
		if ((ft_strcmp(attack,"chop roku")==0))
			defender->life -= 13;
		if ((ft_strcmp(attack,"chop shichi")==0))
			defender->life -= 8;
		if ((ft_strcmp(attack,"chop hachi")==0))
			defender->life -= 6;
		if ((ft_strcmp(attack,"chop ku")==0))
			defender->life -= 11;
		if ((ft_strcmp(attack,"chop ju")==0))
			defender->life -= 9;
		if ((ft_strcmp(attack,"chop hyaku")==0))
			defender->life -= 18;
		if ((ft_strcmp(attack,"chop sen")==0))
			defender->life -= 10;
		ft_putstr(offender->name);	
		ft_putstr(" does a judo ");
		ft_putstr(attack);
		ft_putstr(" on ");
		ft_putstr(defender->name);
		ft_putstr(".\n");
		if (defender->life <= 0)
		{	
			ft_putstr(defender->name);
			ft_putstr(" is dead");
			ft_putstr(".\n");
		}
	}
}
