/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 09:12:21 by tseanego          #+#    #+#             */
/*   Updated: 2019/08/30 09:19:20 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s.
** The memchr() function returns a pointer to the byte located, or NULL if
** no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n)
	{
		if (str[i] == c1)
			return (str + i);
		n--;
		i++;
	}
	return (0);
}
