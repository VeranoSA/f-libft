/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 07:24:27 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/09 07:30:06 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isprint() function tests for any printing character, including space
** (` ').The value of the argument must be representable as an unsigned
** char or the value of EOF.
** The isprint() function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126 ? 1 : 0);
}
