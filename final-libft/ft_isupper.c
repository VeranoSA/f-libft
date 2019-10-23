/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:21:16 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 08:29:33 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function returns a nonzero if c is an uppercase character
*/

#include "libft.h"

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}
