/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 09:00:11 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 16:24:17 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memmove() function copies n bytes from string src to string dst.
** The two strings may overlap;
** function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *pd;
	char *ps;

	if (dest == src)
		return (dest);
	pd = (char *)dest;
	ps = (char *)src;
	if (src <= dest)
	{
		ps += n - 1;
		pd += n - 1;
		while (n--)
			*pd-- = *ps--;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
