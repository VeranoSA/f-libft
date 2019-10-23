/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 11:52:27 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/02 12:00:25 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the character c to the standard output
** Return none
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
