/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:52:29 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/02 11:42:23 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Sets every character of the string to the value ’\0’
** The string that needs to be cleared
** Return None
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s != NULL)
		while (s[i])
			s[i++] = '\0';
}
