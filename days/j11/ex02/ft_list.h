/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:53:58 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/18 18:03:06 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct      s_list
{
	struct s_list	*next;
	void			*data;
}			    	t_list;

t_list				*ft_create_elem(void *data);

#endif
