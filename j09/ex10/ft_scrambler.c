/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:27:21 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/13 16:27:44 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmp;

	tmp = ****d;
	****d = *******c;
	*******c = ***a;
	***a = *b;
	*b = tmp;
}
