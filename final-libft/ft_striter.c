/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:29:25 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 09:32:20 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function iterates over a string and applies
** function f to every character in the string.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int j;

	j = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[j])
	{
		f(&s[j]);
		j++;
	}
}
