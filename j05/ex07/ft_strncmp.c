/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:01:49 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 11:40:03 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int 			difference;
	unsigned int	i;

	difference = 0;
	i = 0;
	while (difference == 0 && i <= n - 1)
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
