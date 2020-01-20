/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:13:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/13 15:43:11 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_fight(t_perso *offender, t_perso *defender, char *attack)
{
	if (!(offender->life <= 0 | defender->life <= 0))
	{
		if ((ft_strcmp(attack, "kick") == 0))
			(defender->life = defender->life - 15);
		if (ft_strcmp(attack, "punch"))
			defender->life -= 5;
		if (ft_strcmp(attack, "headbutt"))
			defender->life -= 20;
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
