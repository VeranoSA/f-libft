/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 18:34:35 by tseanego          #+#    #+#             */
/*   Updated: 2019/10/20 08:21:55 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The bzero() function erases the data in the n bytes of the memory
** starting at the location pointed to by b, by writing zeros (bytes
** containing '\0') to that area.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
