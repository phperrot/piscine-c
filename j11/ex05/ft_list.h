/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:20:13 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 11:49:55 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef __FT_LIST_H
#	define __FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);

#	endif
