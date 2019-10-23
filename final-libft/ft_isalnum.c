/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 07:11:06 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/09 07:16:31 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isalnum() function tests for any character for which isalpha or
** isdigit is true.The value of the argument must be representable as
** an unsigned char or the value of EOF.
** function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
