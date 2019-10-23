/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 07:17:26 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/09 07:22:02 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isascii() function tests for an ASCII character, which is any charac-
** ter between 0 and octal 0177 inclusive.
** Tests if c is within the 7 bit US ASCII range
** which is from 0 to 127 and returns nonzero if yes.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127 ? 1 : 0);
}
