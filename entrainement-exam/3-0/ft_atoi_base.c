/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:54:56 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/26 17:20:33 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_res = 0;

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'\
			str[i] == '\r' || str[i] == '\v' || str[i] == '\r')
		i++
	if (str[i] == '-' && str[i + 1] != '+')
	{
		i++;
		sign = -1;
	}
	if (str[i] == '+')
	{
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		res *=10;
		res += (str[i] - '0');
		i++;	
	}
	return (res * sign);
}

int	ft_convertbase(int nb, char *base)
{
	if (nb > ft_strlen(base))
	{
		ft_convertbase(nb/ft_strlen(base));
		g_res *= 10;
		g_res += (nb % ft_strlen(base));
	}

}

int	ft_atoi_base(const char *str, int str_base)
{
	int nb;
	int sign;

	sign = 1;
	nb = ft_atoi(str);
	if (nb < 0)
	{
		nb = -nb;
		sign = -1;
	}
	nb = ft_convertbase(nb, str_base);
	return (nb * sign);
}
