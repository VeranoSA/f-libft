/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:54:38 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 09:58:00 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function applies function f to every
** character in the string from an index given.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int j;

	j = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*s)
	{
		f(j, s);
		s++;
		j++;
	}
}
