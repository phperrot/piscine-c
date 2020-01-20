/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 21:21:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/23 15:24:49 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef __FT_BOOLEAN_H
#	define __FT_BOOLEAN_H

#	define EVEN(nbr) (nbr % 2 == 0)
#	define TRUE 1
#	define FALSE 0
#	define SUCCESS 0
#	define EVEN_MSG "I have an even number of arguments.\n"
#	define ODD_MSG "I have an odd number of arguments.\n"

#	include <unistd.h>

typedef int	t_bool;

#	endif
