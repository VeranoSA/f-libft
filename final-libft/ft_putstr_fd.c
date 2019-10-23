/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:11:46 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 11:12:04 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The same as putstr except we output
** to a file descriptor instead of to the
** standard output.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s == 0)
		return ;
	write(fd, s, ft_strlen(s));
}
