/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:44:12 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 07:30:57 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strchr function searches for the first occurrence of the
** character c (an unsigned char) in the string pointed
** to by the argument str.
** str − This is the C string to be scanned.
** c − This is the character to be searched in str.
** This returns a pointer to the first occurrence of the
** character c in the string str, or NULL if the character is not found.
** Return apointer to the located character, or Null if the character
** does not appear in the string
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
