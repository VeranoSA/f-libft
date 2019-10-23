/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 07:04:18 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/09 07:08:36 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isdigit() function tests for a decimal digit character.Regardless
** of locale, this includes the following characters only
** functions return zero if the character tests
** false and return non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
