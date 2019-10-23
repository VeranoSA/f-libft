/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:02:13 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 11:03:06 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function trims whitespaces from the start
** and end of the given string (' ', \n, \t).
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const	*new;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	new = s + ft_strlen(s) - 1;
	while (*new == ' ' || *new == '\t' || *new == '\n')
		new--;
	return (ft_strsub(s, 0, new - s + 1));
}
