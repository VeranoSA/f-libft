/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 06:54:33 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/09 07:03:25 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isalpha() function tests for any character for which isupper  or
** islower is true.  The value of the argument must be representable as
** an unsigned char or the value of EOF
** The isalpha() function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
