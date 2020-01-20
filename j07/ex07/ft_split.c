/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 17:49:49 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/17 18:11:50 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int 		ft_condition(int i, char *str, char *charset)
{
	int j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (charset[j] == str[i])
			return (1);
		j++;
	}
	return(0);
}


int			ft_go_to_first_word(char *str, char *charset)
{
	int		i;

	i = 0;
	while (ft_condition(i, str, charset))
		i++;
	return (i);
}

int			ft_get_words_number(char *str, char *charset)
{
	int		nb_words;
	int		i;

	i = 0;
	nb_words = 1;
	while (str[i + 1] != '\0')
	{
		if (ft_condition(i, str, charset) && !ft_condition(i+1, str, charset))
			nb_words++;
		i++;
	}
	return (nb_words);
}

int			*ft_whiles(char *str, int j, char *charset)
{
	int		nb_char;
	int		index;
	int		*res;

	res = (int *)malloc(sizeof(int) * 4);
	nb_char = 0;
	while (ft_condition(j, str, charset)) 
		j++;
	index = j;
	while (!(ft_condition(j, str, charset)))
	{
		nb_char++;
		j++;
	}
	res[0] = nb_char;
	res[1] = j;
	res[2] = index;
	return (res);
}

char		**ft_split(char *str,char *charset)
{
	int		*inc;
	int		nb_words;
	char	**tabwords;
	int		*res;

	inc = (int *)malloc(sizeof(int) * 4);
	inc[1] = ft_go_to_first_word(str, charset);
	nb_words = ft_get_words_number(str, charset);
	res = (int *)malloc(sizeof(int) * 4);
	tabwords = (char **)malloc(sizeof(char*) * (nb_words + 1));
	inc[0] = -1;
	while (inc[0]++ < nb_words - 1)
	{
		res = ft_whiles(str, inc[1], charset);
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

