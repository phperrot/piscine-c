/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:59:02 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/13 14:10:14 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_destroy(char ***factory);

int	main(void)
{
	char a;
	char *ptr1;
	char **ptr2;
	char ***ptr3;

	a = 'a';
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ft_destroy(ptr3);
	return(0);
}

