/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:00:52 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 13:02:16 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The same as putnbr except we output to a
** file desciptor instead of to the standard output.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
