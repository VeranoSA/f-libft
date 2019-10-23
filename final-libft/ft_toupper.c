/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:03:19 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 16:41:09 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The toupper() function converts a lower-case letter to the corresponding
** upper-case letter.The argument must be representable as an unsigned
** char.
** If the argument is a lower-case letter, the toupper() function returns
** the corresponding upper-case letter if there is one; otherwise,
**the argu-ment is returned unchanged.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
