/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:47:07 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 08:49:27 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function counts the number of words in a sentence
** and takes 2 inputs, a pointer to the string
** and what character the words are delimited by.
*/

#include "libft.h"

int	ft_countwords(const char *s, char c)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			res++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (res);
}
