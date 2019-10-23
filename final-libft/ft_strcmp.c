/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:15:05 by tseanego          #+#    #+#             */
/*   Updated: 2019/08/30 10:21:05 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcmp() and strncmp() functions lexicographically compare the null-
** terminated strings s1 and s2.
**
** The strcmp() and strncmp() functions return an integer greater than,
** equal to, or less than 0, according as the string s1 is greater than,
** equal to, or less than the string s2.  The comparison is done using
** unsigned characters, so that `\200' is greater than `\0'.
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		++s1;
		++s2;
		if (*s1 == 0 && *s2 == 0)
			return (0);
	}
	return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1);
}
