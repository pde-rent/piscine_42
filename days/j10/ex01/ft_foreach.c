/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:48:55 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/19 16:48:57 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ch(int *tab, int length, void (*f)(int))
{
	int		i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}