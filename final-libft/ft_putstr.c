/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 12:01:05 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/02 12:18:41 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output
** The string to output
** Return None
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	if (s == 0)
		return ;
	write(1, s, ft_strlen(s));
}
