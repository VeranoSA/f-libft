/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:07:53 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 11:09:04 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The same as putchar except we output to a
** file descriptor instead of to the standard output.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
