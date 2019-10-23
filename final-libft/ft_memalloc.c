/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 07:34:28 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/09 07:36:23 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates a memory block of specified length.
** This function must return null if it fails to allocate memory.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*new;
	size_t	i;

	new = NULL;
	new = (char *)malloc(size);
	if (new)
	{
		i = 0;
		while (size-- > 0)
		{
			new[i] = 0;
			i++;
		}
	}
	return (new);
}
