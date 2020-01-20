/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 11:16:49 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 13:36:35 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_go_to_first_word(char *str)
{
	int		i;

	i = 0;
	while ((str[i] == ' ') | (str[i] == '\n') | (str[i] == '\r') |
							(str[i] == '\t') | (str[i] == '\v'))
		i++;
	return (i);
}

int			ft_get_words_number(char *str)
{
	int		nb_words;
	int		i;

	i = 0;
	nb_words = 0;
	if (!((str[0] == ' ') | (str[0] == '\n') | (str[0] == '\r') |
				(str[0] == '\t') | (str[0] == '\v') | (str[0] == '\0')))
		nb_words++;
	while (str[i + 1] != '\0')
	{
		if (((str[i] == ' ') | (str[i] == '\n') | (str[i] == '\r')
					| (str[i] == '\t') | (str[i] == '\v')) &&
					(!((str[i + 1] == ' ') | (str[i + 1] == '\n') |
					(str[i + 1] == '\r') | (str[i + 1] == '\t') |
					(str[i + 1] == '\v'))))
			nb_words++;
		i++;
	}
	return (nb_words);
}

int			*ft_whiles(char *str, int j)
{
	int		nb_char;
	int		index;
	int		*res;

	res = (int *)malloc(sizeof(int) * 4);
	nb_char = 0;
	while (((str[j] == ' ') | (str[j] == '\n') | (str[j] == '\r') |
			(str[j] == '\t') | (str[j] == '\v') | (str[j] == '\0')))
		j++;
	index = j;
	while (!((str[j] == ' ') | (str[j] == '\n') | (str[j] == '\r') |
				(str[j] == '\t') | (str[j] == '\v') | (str[j] == '\0')))
	{
		nb_char++;
		j++;
	}
	res[0] = nb_char;
	res[1] = j;
	res[2] = index;
	return (res);
}

char		**ft_split_whitespaces(char *str)
{
	int		*inc;
	int		nb_words;
	char	**tabwords;
	int		*res;

	inc = (int *)malloc(sizeof(int) * 4);
	inc[1] = ft_go_to_first_word(str);
	nb_words = ft_get_words_number(str);
	res = (int *)malloc(sizeof(int) * 4);
	tabwords = (char **)malloc(sizeof(char*) * (nb_words + 1));
	inc[0] = -1;
	while (inc[0]++ < nb_words - 1)
	{
		res = ft_whiles(str, inc[1]);
		inc[1] = res[1];
		tabwords[inc[0]] = (char*)malloc(sizeof(char) * (res[0] + 1));
		inc[2] = -1;
		while (inc[2]++ < res[0] - 1)
			tabwords[inc[0]][inc[2]] = str[inc[2] + res[2]];
		tabwords[inc[0]][inc[2]] = '\0';
		inc[1]++;
	}
	tabwords[nb_words] = 0;
	return (tabwords);
}
