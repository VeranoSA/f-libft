/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:33:29 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 08:35:42 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function returns a nonzero if c is a lowercase character
*/

#include "libft.h"

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
