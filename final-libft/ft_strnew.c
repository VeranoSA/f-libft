/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 07:41:43 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/09 07:43:18 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function creates a new null terminated string.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*f;
	int		j;
	int		l;

	l = size + 1;
	j = 0;
	f = (char *)malloc(l);
	if (f == 0)
		return (NULL);
	while (l > 0)
	{
		f[j] = '\0';
		l--;
		j++;
	}
	return (f);
}
