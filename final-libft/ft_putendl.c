/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:22:53 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 11:26:20 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function outputs a string on the
** standard output followed by a newline.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	write(1, "\n", 1);
}
