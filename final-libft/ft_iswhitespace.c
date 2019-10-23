/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:37:39 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 08:39:09 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function returns a nonzero if c is any whitespace character
*/

#include "libft.h"

int	ft_iswhitespace(int c)
{
	if (c >= 9 && c <= 13)
		return (1);
	else if (c == ' ')
		return (1);
	return (0);
}
