/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:49:06 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/20 02:49:01 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;

	i = -1;
	j = 0;
	while (tab[++i] != '\0')
		if (f(tab[i]) == 1)
			j++;
	return (j);
}
