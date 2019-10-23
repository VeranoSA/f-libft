/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:55:48 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 12:59:52 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is an upgrade from memcpy
** where you can add an instruction to the input
** to stop copying at a specified character bit.
** In the main, the function rand() is a random
** number generator used to generate input.
** The number used to limit the loop - 512
** is the number of bits in a char data type.
** The number 10000 that is multiplied in
** is the number of bits in a long data type.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n > 0)
	{
		if ((*str1++ = *str2++) == (unsigned char)c)
			return (str1);
		n--;
	}
	return (NULL);
}
