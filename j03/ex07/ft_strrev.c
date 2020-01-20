/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:07:46 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/09 10:17:45 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			leng(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strrev(char *str)
{
	int		j;
	int		len;
	char	tmp;

	len = leng(str);
	j = 0;
	while (j < len / 2)
	{
		tmp = str[j];
		str[j] = str[len - j - 1];
		str[len - j - 1] = tmp;
		j++;
	}
	return (str);
}
