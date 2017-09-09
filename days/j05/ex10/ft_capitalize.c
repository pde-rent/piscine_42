/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:38:29 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 20:38:44 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char *s;

	s = str;
	while (*s != '\0')
	{
		if (ft_is_alphanum(*(s - 1)) && *s >= 'A' && *s <= 'Z')
			*s += 32;
		if (!ft_is_alphanum(*(s - 1)) && *s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (str);
}
