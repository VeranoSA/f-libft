/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 12:19:51 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/02 12:25:41 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes an uppercase alphabet and convert it to a lowercase character
** If the argument is an upper-case letter, the tolower() function returns
** the corresponding lower-case letter if there is one; otherwise, the argu-
** ment is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
