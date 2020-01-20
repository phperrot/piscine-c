/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:43:03 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/10 12:11:19 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else
	{
		if (index == 0 | index == 1)
		{
			return (index);
		}
		else
		{
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		}
	}
}
