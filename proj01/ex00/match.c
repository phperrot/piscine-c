/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:00:11 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/15 13:12:37 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	return ("");
}

int	ft_stars(char *s2)
{
	int i;
	int stars;

	i = 0;
	stars = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == '*')
			stars++;
		i++;
	}
	return (stars);
}

int pos_star(char *str, int pos)
{
	int i;
	int index_star;
	/* gererr le cas de la dernier (if pos = ft_stars, then... */
	if (pos == 0)
		return (0);	
	if (pos > ft_stars(str))
		return ft_strlen(str);
	i = 0;
	index_star = 0;
	while (str[i] != '\0' && index_star < pos)
	{
		if (str[i] == '*')
			index_star++;
		i++;
	}
	return (i);;

}

int match(char *s1, char *s2)
{
	int stars;
	int i;
	int j;
	int index_s1;
	int index_s2;

	index_s1 = 0;
	index_s2 = 0;
	i = -1;
	j = -1;
	stars = ft_stars(s2);
	while (i++ < stars + 1)
	{
		printf("\n/////// %d /////// \n", pos_star(s2, i + 1));
		printf("\n/////// %d /////// \n", pos_star(s2, i));
		while (j++ < (pos_star(s2, i + 1) - pos_star(s2, i)-2))	
		{
			printf("\n\n #######  %d ####### \n", pos_star(s2, i + 1) - pos_star(s2, i)-1);
			printf("\n\n (((((((  %d )))))))  \n", s1[index_s1]);
			printf("\n\n )))))))  %d (((((((  \n", s2[(pos_star(s2, i))]);
			while (s2[(pos_star(s2, i))] != s1[index_s1])
			{
				index_s1++;
				printf("$$$$$$$ %d $$$$$$$", index_s1);
			}
			/* initialiser les index, apres ca passe*/
			if (s1[index_s1 + j] != s2[pos_star(s2, i) + j])
			{	
				printf("\n\n --------- %d -------- \n", j);	
				printf("\n\n --------- %d -------- \n", index_s1 + j);
				printf("\n\n --------- %d -------- \n", pos_star(s2, i) + j);
				return (0);
			}
		}
	
		printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

	}

	return (1);
}
