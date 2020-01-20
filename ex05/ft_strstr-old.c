/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:35:21 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/11 13:02:08 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int nb_char;

	i = 0;
	j = 0;
	nb_char = 0;
	if (ft_strlen(str) <= ft_strlen(to_find))
	{
		while (j <ft_strlen(to_find)) /* on boucle ici sur les caracteres de la chaine a trouver  */
		{
			while (str[i] != to_find[j] && i < ft_strlen(str))
			{
				i++;	
			}
			if  (i >= ft_strlen(str)) /* on sort du programme */
			{
				j = ft_strlen(to_find);
			}
			if (str[i] == to_find[j])
			{
				nb_char++;
				j++;
				return ("mzungu");
			}
		}
	}
	if (nb_char == ft_strlen(to_find))
	{
		return("hi");
	}
	else
	{
		return ("");
	}

}
