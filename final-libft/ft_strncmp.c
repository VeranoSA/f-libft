/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:11:36 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 09:12:52 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Exactly like strcmp but to n characters.
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *const	us1 = (const unsigned char *)s1;
	const unsigned char *const	us2 = (const unsigned char *)s2;
	size_t						i;

	i = (size_t)0;
	while (i < n)
	{
		if (us1[i] < us2[i])
			return (-1);
		else if (us1[i] > us2[i])
			return (1);
		else if (!us1[i])
			return (0);
		i++;
	}
	return (0);
}
